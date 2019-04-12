/********************************
 You will be writing a (rather primitive) online store simulator.  It will have three classes: Product, Customer and Store.
 A Store object represents a store, which has some number of products in its inventory and some number of customers as members.
 ************************************************/
//#include "Customer.hpp"
#include "Store.hpp"
//#include "Product.hpp"
#include <string>
#include <iostream>

void Store::addProduct(Product* p)			//adds a product to the inventory
{
	inventory.push_back(p);//you may or may not need the *
}

void Store::addMember(Customer* c)			//adds a customer to the members
{
	members.push_back(c);
}

Product*Store::getProductFromID(std::string s)
//returns pointer to product with matching ID.  Returns NULL if no matching ID is found.
{
	for(Product* prodID : inventory)
		{
			if(prodID->getIdCode() == s)
			{
				return prodID;
			}
		}
	return NULL;
}

Customer*Store::getMemberFromID(std::string s)
//returns pointer to customer with matching ID.  Returns NULL if no matching ID is found.
{
	for(Customer* membID : members)
	{
		if(membID->getAccountID() == s)
		{
			return membID;
		}
	}
	return NULL;
}
void Store::productSearch(std::string str)
//prints out search result product's title, ID code, price and description.
{
	for(Product* itemDesc : inventory)
	{
		if((itemDesc->getTitle()).find(str))
		{
			str[0] = tolower(str[0]);
			std::cout << itemDesc->getTitle() << "\nID Code: " << itemDesc->getIdCode() << "\nPrice: $" << itemDesc->getPrice() << "\n" << itemDesc->getDescription() << "\n" << std::endl;
		}
		else
		{
			str[0] = toupper(str[0]);
			std::cout << itemDesc->getTitle() << "\nID Code: " << itemDesc->getIdCode() << "\nPrice: $" << itemDesc->getPrice() << "\n" << itemDesc->getDescription() << "\n" << std::endl;
		}
	}
}
void Store::addProductToMemberCart(std::string pID, std::string mID)
//If product isn't found in inventory, print "Product #[idCode goes here] not found."  If the member isn't found in the members, print "Member #[accountID goes here] not found."  If both are found and the product is still available, calls the member's addProductToCart method.  Otherwise it prints "Sorry, product #[idCode goes here] is currently out of stock."  The same product can be added multiple times if the customer wants more than one of something.
{
	if(!getMemberFromID(mID))
	{
		std::cout << "Member #" << mID << " not found." << std::endl;
	}
	
	else if(getProductFromID(pID))
	{
		//getMemberFromID(mID)->addProductToCart(getProductFromID(pID));
		getMemberFromID(mID)->addProductToCart(pID);
	}
	else
	{
		std::cout << "Product #" << pID << " not found." << std::endl;
	}
}
void Store::checkOutMember(std::string mID)
//  If the member isn't found in the members, print "Member #[accountID goes here] not found."  Otherwise prints out the title and price for each product in the members cart and decreases the available quantity of that product by 1.  If any product has already sold out, then on that line it should print 'Sorry, product #[idCode goes here], "[product name goes here]", is no longer available.'  At the bottom it should print out the subtotal for the cart, the shipping cost ($0 for premium members, 7% of the cart cost for normal members), and the final total cost for the cart (subtotal plus shipping).  If the cart is empty, it should just print "There are no items in the cart."  When the calculations are complete, the member's cart should be emptied.
{
	double subTotal = 0.0;
	double costShip = 0.0;
	Customer *membIdPtr = getMemberFromID(mID);
	std::vector<std::string> cart = membIdPtr->getCart();
	
	if(getMemberFromID(mID))
	{
		for(std::string itemChosen : cart)
		{
			if((getProductFromID(itemChosen)->getQuantityAvailable()) > 1)
			{
				getProductFromID(itemChosen)->decreaseQuantity();
				
				std::cout << getProductFromID(itemChosen)->getTitle() << " - " << " $" << getProductFromID(itemChosen)->getPrice() << " \n";
				
				subTotal += (getProductFromID(itemChosen)->getPrice());
			}
			else
			{
				std::cout << "Sorry, product #" << getProductFromID(itemChosen)->getIdCode() << ", " << getProductFromID(itemChosen)->getTitle() << ", is no longer available." << std::endl;
			}
		}
		std::cout << "Subtotal: $" << subTotal << std::endl;
		
		if(getMemberFromID(mID)->isPremiumMember())
		{//shipping for Premium Members
			std::cout << "Shipping Cost: 0" << std::endl;
		}
		
		else
		{
			costShip = subTotal * 0.07;//add sales tax
			std::cout << "Shipping Cost: $" << costShip << std::endl;
		}
		
		double totalPurch = (subTotal + costShip);

		std::cout << "Total: $" << totalPurch << std::endl;
		}
		else
		{		 //see if member # is found
			std::cout << "Member #" << mID << " not found." << std::endl;
		}
	getMemberFromID(mID)->emptyCart();
}
