#pragma once
#include <iostream>

using namespace std;

class Elektryczny {
protected:
	int moc;
public:
	Elektryczny(int p_moc = 10) {
		moc = p_moc;
		cout << "Konstruktor: elektryczny: moc: " << moc << endl;
	}
};

class Spalinowy {
protected:
	int moc;
public:
	Spalinowy(int p_moc = 20) {
		moc = p_moc;
		cout << "Konstruktor: spalinowy: moc: " << moc << endl;
	}
};

class Hybryda : public Elektryczny, public Spalinowy {
public:
	Hybryda() {
		cout << "Konstruktor: hybryda: e-moc: " 
			<< Elektryczny::moc << " s-moc: " 
			<< Spalinowy:: moc << endl;
	}
};


