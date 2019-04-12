/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#ifndef prizes_hpp
#define prizes_hpp
#include <iostream>

struct Prizes
{
	Prizes * next = NULL;
	std::string prize;
	
	// constructor for new head node
	Prizes(Prizes* second, std::string p);
};






#endif /* prizes_hpp */
