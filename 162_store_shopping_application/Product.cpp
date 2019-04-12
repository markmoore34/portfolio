/********************************
 You will be writing a (rather primitive) online store simulator.  It will have three classes: Product, Customer and Store.
A Product object represents a product with an ID code, title, description, price and quantity available.
constructor - takes as parameters five values with which to initialize the Product's idCode, title, description, price, and quantity available
get methods - return the value of the corresponding data member
decreaseQuantity - decreases the quantity available by one
************************************************/
//#include "Customer.hpp"
//#include "Store.hpp"
#include "Product.hpp"
#include <iostream>

Product::Product(std::string id, std::string t, std::string d, double p, int q)
{
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = q;
}
std::string Product::getIdCode()
{
	return idCode;
}
std::string Product::getTitle()
{
	return title;
}
std::string Product::getDescription()
{
	return description;
}
double Product::getPrice()
{
	return price;
}
int Product::getQuantityAvailable()
{
	return quantityAvailable;
}
void Product::decreaseQuantity()
{
	quantityAvailable = (quantityAvailable - 1);
}
