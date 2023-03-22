#pragma once
#include <iostream>

using namespace std;

class Bazowa {
public:
	virtual void display() const {
		cout << "Bazowa: display" << endl;
	}

	virtual ~Bazowa() {
		cout << "Bazowa: destruktor" << endl;
	}
};

class PochodnaX: public Bazowa {
public:
	virtual void display() const {
		cout << "PochodnaX: display" << endl;
	}

	virtual ~PochodnaX() {
		cout << "PochodnaX: destruktor" << endl;
	}
};

class PochodnaY : public Bazowa {
public:
	virtual void display() const {
		cout << "PochodnaY: display" << endl;
	}

	virtual ~PochodnaY() {
		cout << "PochodnaY: destruktor" << endl;
	}
};


