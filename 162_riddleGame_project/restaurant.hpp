/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#ifndef restaurant_hpp
#define restaurant_hpp
#include "spaces.hpp"

class Restaurant : public Spaces
{
public:
	Restaurant(std::string prize, std::string place);
	std::string riddle();
};


#endif /* restaurant_hpp */
