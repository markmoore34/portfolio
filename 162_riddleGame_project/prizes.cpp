/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#include "prizes.hpp"

Prizes::Prizes(Prizes* second, std::string p)
{
	next = second;
	prize = p;
}
