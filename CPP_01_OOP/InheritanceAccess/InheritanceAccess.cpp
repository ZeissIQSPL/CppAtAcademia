#include <iostream>
#include <vector>
#include "PublicDerived.h"
#include "ProtectedDerived.h"
#include "PrivateDerived.h"
#include "DestruktorOrder.h"
#include "MultipleInheritance.h"
#include "VirtualMethodSample.h"
#include "AbstractSample.h"

using namespace std;

int main()
{
	//PublicDerived object1;
	//cout << "Private = " << object1.getPVT() << endl;
	//cout << "Protected = " << object1.getProt() << endl;
	//cout << "Public = " << object1.pub << endl;

	//ProtectedDerived object2;
	//cout << "Private cannot be accessed." << endl;
	//cout << "Protected = " << object2.getProt() << endl;
	//cout << "Public = " << object2.getPub() << endl;

	//PrivateDerived object3;
	//cout << "Private cannot be accessed." << endl;
	//cout << "Protected = " << object3.getProt() << endl;
	//cout << "Public = " << object3.getPub() << endl;

	// Konstruktor / Destruktor
	//{
	//	Samochod s1("Fiat", "125p");
	//}
	//	Kombi k1("Syrena", "104");

	// Multiple inheritance
	// Hybryda h1;

	// Virtual
	//Bazowa* bazowa = new Bazowa();
	//Bazowa* pochodna_x = new PochodnaX();
	//Bazowa* pochodna_y = new PochodnaY();

	//bazowa->display();
	//pochodna_x->display();
	//pochodna_y->display();

	//Bazowa* tablica[] = { bazowa, pochodna_x, pochodna_y };
	//cout << endl;
	//for (auto i = 0; i < 3; i++) {
	//	tablica[i]->display();
	//}
	//cout << endl;

	//tablica[1] = bazowa;
	//for (auto i = 0; i < 3; i++) {
	//	tablica[i]->display();
	//}
	//cout << endl;
	//vector <Bazowa*> wektor{ bazowa, pochodna_x, pochodna_y };
	//for (auto w : wektor) {
	//	w->display();
	//}

	//cout << endl;

	//delete bazowa;
	//delete pochodna_x;
	//delete pochodna_y;

	// Abstract
	// AbstractClass ac; // ERROR
	//ConcreteClass cc;
	//cc.setX(10);
	//cc.setY(20);
	//cc.display();

	//AbstractClass* ac2 = new ConcreteClass();
	//ac2->setX(13);
	//ac2->display();

	//delete ac2;
	//return 0;
}
