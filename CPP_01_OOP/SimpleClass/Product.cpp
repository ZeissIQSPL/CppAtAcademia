#include "Product.h"

Product::Product(const Product& product)
{
	std::cout << "copy constructor" << std::endl;
	set_name(product.name_);
	set_price(product.price_);
	this->rating_ = new int;
	set_rating(*product.rating_);
	set_availability(product.available_);
}

//Product::Product(Product&& product)
//{
//	std::cout << "move constructor" << std::endl;
//	set_name(product.name_);
//	set_price(product.price_);
//	set_rating(*product.rating_);
//	set_availability(product.available_);
//}

void Product::set_name(const std::string& name)
{
	this->name_ = name;
}

std::string Product::name() const
{
	return this->name_;
}

void Product::set_availability(bool availability)
{
	this->available_ = availability;
}

bool Product::available() const
{
	return available_;
}

void Product::set_price(double price)
{
	this->price_ = price;
}

double Product::price()
{
	return price_;
}

void Product::set_rating(int rating)
{
	*this->rating_ = rating;
}

int Product::rating()
{
	return *rating_;
}

std::string Product::toString()
{
	return "{ name: " + this->name() +
		", price: " + std::to_string(this->price()) +
		", rating: " + std::to_string(this->rating()) +
		", available: " + std::to_string(this->available()) + " }";
}
