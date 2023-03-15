#pragma once

#include <iostream>

using namespace std;

class AbstractClass {
protected:
	int x;
public:
	virtual void display() = 0;

	void setX(int p_x) {
		x = p_x;
	}
};

class ConcreteClass: public AbstractClass {
protected:
	int y;
public:
	virtual void display() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}

	void setY(int p_y) {
		y = p_y;
	}
};

