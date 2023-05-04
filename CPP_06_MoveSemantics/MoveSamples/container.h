#pragma once

#include <format>
#include <string>
#include <vector>
#include <initializer_list>
#include <utility>

using std::string;

// format-style print()
//constexpr void print(const std::string_view str_fmt, auto&&... args) {
//	fputs(std::vformat(str_fmt, std::make_format_args(args...)).c_str(), stdout);
//}

template<typename T>
class container {
	std::vector<T> things{};
public:
	container() { print("default ctor\n"); }    // default ctor
	container(std::initializer_list<T> il);     // il ctor
	container(const container& rhs);            // copy ctor
	container(container&& rhs) noexcept;        // move ctor
	~container();
	void reset();
	//container<T>& operator = (const container& rhs);    // standard assignment
	container<T>& operator = (container rhs);            // copy/swap 
	//container<T>& operator = (container&& rhs) noexcept;  // move assignment
	string str() const;
};

// initializer-list ctor
template<typename T>
container<T>::container(std::initializer_list<T> il) : things{ il.begin(), il.end() } {
	print("initializer-list ctor\n");
}

// copy ctor
template<typename T>
container<T>::container(const container& rhs) : things{ rhs.things } {
	print("copy ctor\n");
}

// copy assignment operator
//template<typename T>
//container<T>& container<T>::operator = (const container& rhs) {
//	print("copy assignment operator\n");
//	if (this != &rhs) things = rhs.things;
//	return *this;
//}

// copy/swap operator
template<typename T>
container<T>& container<T>::operator = (container rhs) {
	print("copy/swap operator\n");
	std::swap(things, rhs.things);
	return *this;
}

// move assignment operator
//template<typename T>
//container<T>& container<T>::operator = (container&& rhs) noexcept{
//	print("move assignment operator\n");
//	if (this != &rhs) things = std::move(rhs.things);
//	return *this;
//}

// move ctor
template<typename T>
container<T>::container(container&& rhs) noexcept
	: things{ std::move(rhs.things) } {
	print("move ctor\n");
}

// dtor
template<typename T>
container<T>::~container() {
	print("dtor\n");
}

// reset()
template<typename T>
void container<T>::reset() {
	things.clear();
}

// str()
template<typename T>
string container<T>::str() const {
	string out{};
	if (things.empty()) return "[empty]";
	for (auto i : things) {
		if (out.size()) out += ':';
		out += format("{}", i);
	}
	return out;
}

template<typename T>
//container<T> f(container<T>&& o) {
container<T> f(container<T> o) {
	return o;
}

int container_test() {
	container<string> a{ "one", "two", "three", "four", "five" };
	container<string> b{ "five", "six", "seven" };

	print("a: {}\n", a.str());
	print("b: {}\n", b.str());

	//container c(a);
	//container c{ std::move(a) };
	//container c(f(a));
	//container c(f(std::move(a)));
	//container<string> c{};
	//c = std::move(a);
	// copy/swap
	//b = a;
	b = std::move(a);

	print("a: {}\n", a.str());
	print("b: {}\n", b.str());
	//print("c: {}\n", c.str());

	return 0;
}
