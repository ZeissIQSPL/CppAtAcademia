#include <iostream>
#include "Product.h"
#include "Samochod.h"
#include "ZaprzyjaznionyWarsztat.h"
#include "ShallowCopy.h"
#include "HeapAndStack.h"
#include <vector>


//static Product global_prod;

Product* foo() {
	Product* heap_prod = new Product();
	heap_prod->set_name("Sample");
	return heap_prod;
}

int main()
{
	//Product stack_prod("NazwaProd", 5, 10, true);
	//if (true) {
	//	Product tmp;
	//	tmp.set_price(3);
	//}
	//stack_prod.set_price(4.2);
	//std::cout << stack_prod.toString() << std::endl;

	//std::cout << foo()->toString() << std::endl;

	// Samochod
	//Samochod car1;
	//cout << car1.toString() << endl;
	//Samochod car2("Fiat", "125p", 3);
	//cout << car2.toString() << endl;
	//Samochod car3("Fiat", "126p");
	//cout << car3.toString() << endl;
	//Samochod car4 = car3;
	//cout << car4.toString() << endl;
	//car4.set_marka("QQ");

	// ShallowCopy
	ShallowCopy sc1{ 5, 6 };
	ShallowCopy sc2 = sc1;
	cout << "ShallowCopy: " << endl;
	cout << "sc1: " << sc1.toString() << endl;
	cout << "sc2: " << sc2.toString() << endl;
	sc2.set_data(77);
	cout << "sc1: " << sc1.toString() << endl;
	cout << "sc2: " << sc2.toString() << endl;
	 deep version
	cout << "DeepCopy: " << endl;
	ShallowCopy sc3(sc2);
	cout << "sc2: " << sc2.toString() << endl;
	cout << "sc3: " << sc3.toString() << endl;
	sc3.set_data(88);
	cout << "sc2: " << sc2.toString() << endl;
	cout << "sc3: " << sc3.toString() << endl;

	// konstruktor przenoszacy
	//vector <ShallowCopy> objects;
	//objects.push_back(ShallowCopy(1, 1));
	//objects.push_back(ShallowCopy(2, 2));
	//objects.push_back(ShallowCopy(3, 3));

	// obiekty stale
	//const ShallowCopy sc_const(13, 13);
	//cout << "sc_const: " << sc_const.toString() << endl;
	// sc_const.set_data(10); // ERROR

	//// Copy 
	//Product prod_0{ "Book", 3.1415, 10, true };
	//std::cout << prod_0.toString() << std::endl;

	//Product prod_1{ prod_0 };
	//prod_1.set_name("Pen");
	//std::cout << "prod_1: " << prod_1.toString() << std::endl;
	//std::cout << "prod_0: " << prod_0.toString() << std::endl;
	//
	//Product prod_2 = prod_0;
	//prod_2.set_price(123456.12);
	//std::cout << "prod_2: " << prod_2.toString() << std::endl;
	//std::cout << "prod_0: " << prod_0.toString() << std::endl;

	//Product prod_3;
	//prod_3 = prod_2;

	//prod_3.set_rating(20);
	//std::cout << "prod_3: " << prod_3.toString() << std::endl;
	//std::cout << "prod_0: " << prod_0.toString() << std::endl;

	//// Move
	//Product m_prod_0{ "mBook", 1.234, 1, false };
	//Product m_prod_1 = std::move(m_prod_0);
	//std::cout << "m_prod_0: " << m_prod_0.toString() << std::endl;
	//std::cout << "m_prod_1: " << m_prod_1.toString() << std::endl;
	//m_prod_1.set_rating(2);
	//std::cout << "m_prod_0: " << m_prod_0.toString() << std::endl;
	//std::cout << "m_prod_1: " << m_prod_1.toString() << std::endl;

	// Heap and stack
	//stack();
	//heap();
	//deleteArray();

	// zaprzyjaznienie
	//Samochod s_friend("Fiat", "125p", 3);
	//raportNaprawy(s_friend, 123.50);
	//ZaprzyjaznionaNaprawa naprawa(333);
	//naprawa.raport(s_friend);
}
