/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/

#include "spaces.hpp"

Spaces::Spaces(){}

Spaces::Spaces(std::string p, std::string place)
{
	prize = p;
	this->place = place;
}

void Spaces::printMap()
{
	std::cout << "\n\tYou are in the " << place << "." << std::endl << std::endl;
	std::cout << "\t____________     ____________     ____________     ____________\n";
	std::cout << "\t- BEDROOM  -=====-    DEN   -=====-  24HOUR  -=====- CHILI'S  -\n";
	std::cout << "\t^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^\n";
	std::cout << "\t     ||               ||               ||               ||     \n";
	std::cout << "\t____________     ____________     ____________     ____________\n";
	std::cout << "\t-    OSU   -=====-ELEMENTARY-=====-  GOLD'S  -=====-BENNIGAN'S-\n";
	std::cout << "\t^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^\n";
}

std::string Spaces::riddle()//will have the riddle and answer choices. will return the string for the answer.
{
	std::cout << "TEST Riddle in SPACES class. "<< std::endl;
	return NONprize;
}

void Spaces::setPtrs(Spaces* u, Spaces* r, Spaces* d, Spaces* l)
{
	up = u;
	right = r;
	down = d;
	left = l;
}
