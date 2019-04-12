/********************************
 
 You will be writing a (rather primitive) online store simulator.  It will have three classes: Product, Customer and Store.
 
 A Customer object represents a customer with a name and account ID.  Customers must be members of the Store to make a purchase.  Premium members get free shipping.
 
 constructor - takes as parameters three values with which to initialize the Customer's name, account ID, and whether the customer is a premium member
 get methods - return the value of the corresponding data member
 isPremiumMember - returns whether the customer is a premium member
 addProductToCart - adds the product ID code to the Customer's cart
 emptyCart - empties the Customer's cart
 
 ************************************************/
#include "Customer.hpp"
//#include "Store.hpp"
//#include "Product.hpp"
#include <string>
#include <iostream>

Customer::Customer(std::string n, std::string a, bool pm)
{
	name = n;
	accountID = a;
	premiumMember = pm;
}

std::string Customer::getAccountID()
{
	return accountID;
}

std::vector<std::string> Customer::getCart()// this is the customers cart
{
	return cart;
}

void Customer::addProductToCart(std::string pID)
{
	cart.push_back(pID); //you may or may not need the *
}

bool Customer::isPremiumMember()
{
	if(premiumMember == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Customer::emptyCart()
{
	if(cart.empty())
	{
		std::cout << "There are no items in the cart." << std::endl;
	}
	else
	{
		cart.clear();
	}
}
