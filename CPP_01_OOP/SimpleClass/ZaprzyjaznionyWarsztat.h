#pragma once

#include <string>
#include <iostream>

using namespace std;

class Samochod;

class ZaprzyjaznionaNaprawa
{
private:
	float cena_naprawy;
public:
	ZaprzyjaznionaNaprawa(float cena = 50) {
		cena_naprawy = cena;
	}

	void raport(Samochod& samochod) {
		cout << "Cena naprawy samochodu: "
			<< samochod.marka_ << " " << samochod.model_
			<< " wynosi: " << to_string(cena_naprawy) << endl;
	}
};

