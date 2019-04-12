/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#ifndef house_hpp
#define house_hpp
#include "spaces.hpp"

class House : public Spaces
{
public:
	House(std::string prize, std::string place);
	std::string riddle();
};

#endif /* house_hpp */
