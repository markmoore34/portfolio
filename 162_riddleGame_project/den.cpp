/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#include "den.hpp"

Den::Den(std::string p, std::string place)
{
	prize = p;
	this->place = place;
}

std::string Den::riddle()//will have the riddle and answer choices. will return the string for the answer.
{
	printMap();
	std::cout << "You enter to find a note on the floor. \nIt reads, 'What do spiders in Silicon Valley want to be when they grow up?'. \nYou need to choose A, B, or C, to answer." << std::endl;
	
	char choice;
	std::cout << "\n\tA : Network Engineers.\n";
	std::cout << "\tB : Musicians.\n";
	std::cout << "\tC : Web designers..\n";//correct
	
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



