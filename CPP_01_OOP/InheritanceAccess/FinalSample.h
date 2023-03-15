#pragma once

#include <iostream>

using namespace std;

class A {
public:
	virtual void funkcja() const /*final*/ {
		cout << "A: funkcja" << endl;
	}
};

class B /*final*/ : public A {
public:
	virtual void funkcja() const {
		cout << "B: funkcja" << endl;
	}
};

class C : public B {
public:
	virtual void funkcja() const {
		cout << "C: funkcja" << endl;
	}
};


