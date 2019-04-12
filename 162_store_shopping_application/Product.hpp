/********************************
 You will be writing a (rather primitive) online store simulator.  It will have three classes: Product, Customer and Store.
 A Product object represents a product with an ID code, title, description, price and quantity available.
 constructor - takes as parameters five values with which to initialize the Produc's idCode, title, description, price, and quantity available
 get methods - return the value of the corresponding data member
 decreaseQuantity - decreases the quantity available by one
 ************************************************/
#ifndef PRODUCT_HPP
#define PRODUCT_HPP
#include <string>

class Product
{
private:
	
    std::string idCode;
	
    std::string title;
	
    std::string description;
	
    double price;
	
    int quantityAvailable;

public:
	
    Product(std::string id, std::string t, std::string d, double p, int qa);
	
    std::string getIdCode();
	
    std::string getTitle();
	
    std::string getDescription();
	
    double getPrice();
	
    int getQuantityAvailable();
	
    void decreaseQuantity();
};
#endif
