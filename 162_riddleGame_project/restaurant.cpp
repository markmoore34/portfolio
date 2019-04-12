/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#include "restaurant.hpp"

Restaurant::Restaurant(std::string p, std::string place)
{
	prize = p;
	this->place = place;
}

std::string Restaurant::riddle()//will have the riddle and answer choices. will return the string for the answer.
{
	printMap();
	std::cout << "You enter to find a note on the floor. \nIt reads, 'What type of shoes do spies wear?'" << std::endl;
	
	char choice;
	std::cout << "\n\tA : None. They don't want to leave prints.\n";
	std::cout << "\tB : Sketchers.\n";
	std::cout << "\tC : Sneakers.\n";//correct
	
	std::cin >> choice;
	choice = toupper(choice);//added to make whatever input they used an upper case.
	while(choice != 'A' && choice != 'B' && choice != 'C')//choice validation
	{
		std::cout << "\nPlease enter A, B, or C.\n";
		std::cin >> choice;
		choice = toupper(choice);//added to make whatever input they used an upper case.
	}
	switch(choice)
	{
		case 'A' : std::cout << "Sorry, that's not correct. Try another location.";
			break;
		case 'B' : std::cout << "Sorry, that's not correct. Try another location.";
			break;
		case 'C' : std::cout << "Correct! You get a reward!"; return prize;
			
	}
	return NONprize;
}
