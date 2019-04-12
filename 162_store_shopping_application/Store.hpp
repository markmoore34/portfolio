/********************************
 
 You will be writing a (rather primitive) online store simulator.  It will have three classes: Product, Customer and Store.
 
 A Store object represents a store, which has some number of products in its inventory and some number of customers as members.
 addProductToMemberCart -  If the product isn't found in the inventory, print "Product #[idCode goes here] not found."  If the member isn't found in the members, print "Member #[accountID goes here] not found."  If both are found and the product is still available, calls the member's addProductToCart method.  Otherwise it prints "Sorry, product #[idCode goes here] is currently out of stock."  The same product can be added multiple times if the customer wants more than one of something.
 checkOutMember -  If the member isn't found in the members, print "Member #[accountID goes here] not found."  Otherwise prints out the title and price for each product in the cart and decreases the available quantity of that product by 1.  If any product has already sold out, then on that line it should print 'Sorry, product #[idCode goes here], "[product name goes here]", is no longer available.'  At the bottom it should print out the subtotal for the cart, the shipping cost ($0 for premium members, 7% of the cart cost for normal members), and the final total cost for the cart (subtotal plus shipping).  If the cart is empty, it should just print "There are no items in the cart."  When the calculations are complete, the member's cart should be emptied.
 ************************************************/

#ifndef STORE_HPP
#define STORE_HPP

#include <string>
#include "Customer.hpp"

class Store
{
	
private:
	
    std::vector<Product*> inventory;
	
	
    std::vector<Customer*> members;
	
	
public:
	
	void addProduct(Product* p);//adds a product to the inventory
	
	
	void addMember(Customer* c);//adds a customer to the members
	
	
	Product* getProductFromID(std::string);
											//returns pointer to product with matching ID.  Returns NULL if no matching ID is found.
	
	
	Customer* getMemberFromID(std::string);
											//returns pointer to customer with matching ID.  Returns NULL if no matching ID is found.
	
	
	void productSearch(std::string str);
											//prints out search result product's title, ID code, price and description.
	
	
	void addProductToMemberCart(std::string pID, std::string mID);
	
	
	void checkOutMember(std::string mID);
	
};

#endif
