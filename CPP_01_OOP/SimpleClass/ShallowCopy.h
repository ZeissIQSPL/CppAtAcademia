#pragma once
#include <string>
#include <iostream>

using namespace std;

class ShallowCopy
{
private:
	int number_;
	int* data_;
public:
	ShallowCopy(int number = 1, int data = 2) : number_(number) {
		data_ = new int;
		*data_ = data;
		cout << "ShallowCopy(2): utworzony: " << data << endl;
	}

	// to bedzie glebokie kopiowanie
	ShallowCopy(const ShallowCopy &object) : ShallowCopy(object.number_, *object.data_){
		cout << "ShallowCopy(copy): utworzony: " << *object.data_ << endl;
	}

	// konstruktor przenoszacy
	//ShallowCopy(ShallowCopy &&object) : ShallowCopy(object.number_, *object.data_) {
	//	cout << "ShallowCopy(move): utworzony: " << *object.data_ << endl;
	//	object.data_ = nullptr;
	//}

	~ShallowCopy() {
		cout << "~ShallowCopy(): usuwana: ";
		if (data_ != nullptr) {
			cout << *data_;
			delete data_;
		} 
		else {
			cout << "nulptr";
		}
		cout << endl;
	}

	void set_number(int number) {
		number_ = number;
	}
	void set_data(int data) {
		*data_ = data;
	}
	string toString() const {
		return "{ number: " + to_string(number_) +
			", data: " + to_string(*data_) + " }";
	}
};

