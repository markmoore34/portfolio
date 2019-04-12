/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/
#include "house.hpp"

House::House(std::string p, std::string place)
{
	prize = p;
	this->place = place;
}

std::string House::riddle()//will have the riddle and answer choices. will return the string for the answer.
{
	printMap();
	std::cout << "You enter to find a note on the floor. \nIt reads, 'Why do ducks have feathers on their butts?'. \nYou need to choose A, B, or C, to answer." << std::endl;
	
	char choice;
	std::cout << "\n\tA : Low circulation. They get cold.\n";
	std::cout << "\tB : To cover their quacks.\n";
	std::cout << "\tC : They need down... down there... Get it?\n";

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
		case 'B' : std::cout << "Correct! You get a reward!\n\n"; return prize;
			break;
		case 'C' : std::cout << "Sorry, that's not correct. Try another location.";

	}
	return NONprize;
}
