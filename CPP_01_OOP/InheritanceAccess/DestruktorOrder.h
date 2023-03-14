#pragma once

#include <iostream>

using namespace std;

class Samochod {
protected:
	string marka;
	string model;
public:
	Samochod(string p_marka = "Nie podano", string p_model = "Nie podano") {
		marka = p_marka;
		model = p_model;
		cout << "Konstruktor: samochod: " << marka << " " << model << endl;
	}
	~Samochod() {
		cout << "Destruktor: samochod: " << marka << " " << model << endl;
	}
};

class Kombi : public Samochod {
public:
	//Kombi(string p_marka, string p_model) {
	//	marka = p_marka;
	//	model = p_model;
	//	cout << "Konstruktor: kombi: " << marka << " " << model << endl;
	//}
	Kombi(string p_marka, string p_model) : Samochod(p_marka, p_model) {
		marka = p_marka;
		model = p_model;
		cout << "Konstruktor: kombi: " << marka << " " << model << endl;
	}
	~Kombi() {
		cout << "Destruktor: kombi: " << marka << " " << model << endl;
	}
};



