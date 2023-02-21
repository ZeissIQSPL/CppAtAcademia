#pragma once
#include <string>
#include <iostream>

class Product {
private:
	std::string name_;
	double price_;
	int *rating_;
	bool available_;
public:
	Product() = default; 
//	Product() = delete;

	Product(const std::string& name, double price, int rating, bool availability) :
		name_(name), price_(price), available_(availability) {
		std::cout << "param constructor" << std::endl;
		rating_ = new int;
		*rating_ = rating;
	}

	Product(const Product& product); 
	// copy constructor
	// copy of object is created
	Product(Product&& product) = default;
	// move constructor
	// It will shift the resources, without creating a copy

	Product& operator=(const Product&) = default;
	Product& operator=(Product&&) = default;

	~Product() {
		if (rating_ == nullptr)
			delete rating_;
		std::cout << "~Product(): destructor" << std::endl;
	}
public:
	void set_name(const std::string& name);
	std::string name() const;
	void set_availability(bool availability);
	bool available() const;
	void set_price(double price);
	double price();
	void set_rating(int rating);
	int rating();

	std::string toString();
};



