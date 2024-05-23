#pragma once
#include <string>
#include <iostream>

using namespace std;

class ZaprzyjaznionaNaprawa;

class Samochod
{
private:
	string marka_;
	string model_;
	float spalanie_;
public:
	Samochod() {
		cout << "Samochod(): utworzony" << endl;
	}
	Samochod(string marka, string model, float spalanie) : 
		marka_(marka), model_(model), spalanie_(spalanie) {
		cout << "Samochod(3): utworzony" << endl;
	}
	Samochod(string marka, string model) :
		Samochod(marka, model, 0) {
		cout << "Samochod(2): utworzony" << endl;
	}
	Samochod(const Samochod& samochod) : Samochod(samochod.marka_, samochod.model_, samochod.spalanie_) {
		cout << "Samochod(copy): utworzony" << endl;
	}
	// zastepuje trzy powyzsze konstrukory
	//Samochod(string marka = "nie podano", string model = "nie podano", float spalanie = 0) :
	//	marka_(marka), model_(model), spalanie_(spalanie) {
	//	cout << "Samochod(domyslny): utworzony" << endl;
	//}
	~Samochod() {
		cout << "~Samochod(): usuniety" << endl;
	}
	string toString() {
		return "{ marka: " + this->marka_ +
			", marka: " + this->model_ +
			", spalanie: " + to_string(this->spalanie_ )+ " }";
	}
	void set_marka(string marka) {
		this->marka_ = marka;
	}

	friend void raportNaprawy(Samochod& samochod, float cena);
	friend class ZaprzyjaznionaNaprawa;
};

void raportNaprawy(Samochod& samochod, float cena) {
	cout << "Koszt naprawy samochodu: "
		<< samochod.marka_ << " " << samochod.model_
		<< " wynosi: " << to_string(cena) << endl;
}
