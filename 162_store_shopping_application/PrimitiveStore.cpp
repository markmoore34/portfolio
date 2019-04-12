#include <string>
#include "Store.hpp"
//#include "Customer.hpp"
//#include "Product.hpp"
#include <iostream>

int main()
{
	
	std::string aaa111;
	std::string turkey;
	std::string empire;
	std::string bbb222;
	std::string robot;
	std::string bigRobot;
	std::string ccc333;
	std::string goat;
	std::string liveGoat;
	std::string jimmy;
	std::string amy;
	std::string fred;
	std::string aaa211;
	std::string member112;
	std::string member111;
	std::string member222;
	std::string member333;
	std::string ccb333;
	std::string ccc323;
	std::string ccb233;
	std::string member211;
	std::string ccc233;

	aaa111 = "aaa111";
	turkey = "Turkey";
	empire = "The best turkey in the Ottoman Empire";
	bbb222 = "bbb222";
	robot = "giant robot";
	bigRobot = "a really big robot";
	ccc333 = "ccc333";
	goat = "live goat";
	liveGoat = "it's alive, really";
	jimmy = "Jimmy";
	amy = "Amy";
	fred = "Fred";
	aaa211 = "aaa211";
	member112 = "member112";
	ccb333 = "ccb333";
	ccc323 = "ccc323";
	ccb233 = "ccb233";
	member211 = "member211";
	ccc233 = "ccc233";
	
	Store myStore;
	//create products
	Product product1(aaa111, turkey, empire, 11, 10);
	Product product2(bbb222, robot, bigRobot, 12, 20);
	Product product3(ccc333, goat, liveGoat, 13, 30);
	
	//add products to class
	myStore.addProduct(&product1);
	myStore.addProduct(&product2);
	myStore.addProduct(&product3);
	
	//create members
	Customer customer1(jimmy, member111, true);
	Customer customer2(amy, member222, true);
	Customer customer3(fred, member333, false);
	
	//add members to class
	myStore.addMember(&customer1);
	myStore.addMember(&customer2);
	myStore.addMember(&customer3);
	
	std::cout << "add product ID aaa111, get product, " << std::endl;
	myStore.getProductFromID(aaa111);
	
	std::cout << "add BAD product ID aaa211, warning, " << std::endl;
	myStore.getProductFromID(aaa211);
	
	std::cout << "add member111, get memb name" << std::endl;
	myStore.getMemberFromID(member111);
	
	std::cout << "add BAD member112, warning" << std::endl;
	myStore.getMemberFromID(member112);
	
	std::cout << "Search by BAD memb ID ccb333, warning" << std::endl;
	myStore.getMemberFromID(ccc233);
	
	std::cout << "search product ccc333" << std::endl;
	myStore.productSearch(ccc333);
	
	std::cout << "search BAD product ccc323" << std::endl;
	myStore.productSearch(ccc323);
	
	std::cout << "Add product to member cart, memb #member111, product ccc333" << std::endl;
	myStore.addProductToMemberCart(ccc333, member111);
	
	std::cout << "Add product to member cart, memb #member111, product aaa111" << std::endl;
	myStore.addProductToMemberCart(aaa111, member111);

	
	std::cout << "Add product to member cart, memb #member111, product bbb222" << std::endl;
	myStore.addProductToMemberCart(bbb222, member111);
	
	
	std::cout << "Add BAD product to member cart, memb #member111, product ccb233" << std::endl;
	myStore.addProductToMemberCart(ccc233, member111);

	
	std::cout << "Add product to bad member # cart, memb #member211, product ccc233" << std::endl;
	myStore.addProductToMemberCart(ccc233, member211);

	std::cout << "check out member #member111" << std::endl;
	myStore.checkOutMember(member111);
	
	return 0;
}




