#pragma once
#include <vector>
#include<algorithm>
#include "format_func.h"

inline void sample_01() {
	double x(0.0);

	x = [] {return 200; }();
	print("x = {}\n", x);

	x = [](int x, int y) {return 0.5 * (x + y); }(1, 2);
	print("x = {}\n", x);

	x = [](int x, int y) -> double {return 0.5 * (x + y); }(1, 2);
	print("x = {}\n", x);
}

inline void sample_02() {
	auto v = std::vector<int>{ 5, 3, -3, 2, 7, 1, 0, 99, 3 };

	disp_v(v);

	auto lbd_cond = [](int x) {return x >= -1 && x <= 4;  };

	is_partitioned(v.begin(), v.end(), lbd_cond) ?
		print("Vector is partitioned\n") :
		print("Vector is not partitioned\n");

	auto i = partition(v.begin(), v.end(), lbd_cond);
	//auto i = stable_partition(v.begin(), v.end(), lbd_cond);

	if (i != v.end()) print("partition point: {}\n", *i);

	disp_v(v);

	is_partitioned(v.begin(), v.end(), lbd_cond) ?
		print("Vector is partitioned\n") :
		print("Vector is not partitioned\n");
}

inline void sample_03() {
	auto v = std::vector<int>{ 1, 2, 3, 4, 5, };

	disp_v(v);

	int i = 2;
	transform(v.begin(), v.end(), v.begin(),
		[&i](int x) { ++i;  return x * i; });  // i captured by value

	print("i = {}\n", i);
	disp_v(v);
}

inline void sample_04() {
	std::vector<int> v;
	v.resize(9, 0);

	disp_v(v);

	int i = 0;
	//generate(v.begin() + 2, v.begin() + 6,
	//	[&] { i += 2;  return i; });
	auto even_ints = [&i] { i += 2;  return i; };
	generate(v.begin() + 2, v.begin() + 6, even_ints);

	print("i = {}\n", i);
	disp_v(v);
}
inline void sample_05() {

	int i(1), j(2);

	//value parameters
	auto val_lbd = [](auto x, auto y) {  x++; 
		return (x + y) * 2; };
	print("val_lbd = {}\n", val_lbd(i, j));
	print("i = {} j = {}\n", i, j);

	//const reference parameters
	auto cref_lbd = [](auto const& x, auto const& y) { //x++; 
		return (x + y) * 2; };
	print("cref_lbd = {}\n", cref_lbd(i, j));
	print("i = {} j = {}\n", i, j);

	// non-const reference parameters
	auto ref_lbd = [](auto& x, auto& y) { x++; 
		return (x + y) * 2; };
	print("ref_lbd = {}\n", ref_lbd(i, j));
	print("i = {} j = {}\n", i, j);
}

inline void sample_06() {
	std::vector<int> v1{ 1, 7, 4, 9, 4, 8, 12, 10, 20 };

	// is_div4 predicate
	auto is_div4 = [](int i) { return i % 4 == 0; };

	// count numbers div by 4
	auto count = std::count_if(v1.begin(), v1.end(), is_div4);
	print("count is {}\n", count);

	// copy numbers div by 4s
	std::vector<int> v2{};
	std::copy_if(v1.begin(), v1.end(), std::back_inserter(v2), is_div4);
	disp_v(v2);

	// char_upper operator
	auto char_upper = [](char c) ->char {
		if (c >= 'a' && c <= 'z') return c - ('a' - 'A');
		else return c;
	};

	std::string s1{ "big light in sky slated to appear in east" };
	std::string s2{};
	std::string s3{};
	print("\ns1: {}\n", s1);

	// char_upper transform
	std::transform(s1.begin(), s1.end(), std::back_inserter(s2), char_upper);
	print("s2: {}\n", s2);

	// title_case operator
	auto title_case = [&char_upper](char c) {
		static char prev_c{ ' ' };
		char new_c{ prev_c == ' ' ? char_upper(c) : c };
		prev_c = c;
		return new_c;
	};

	// title_case transform
	std::transform(s1.begin(), s1.end(), std::back_inserter(s3), title_case);
	print("\ns3: {}\n", s3);

}