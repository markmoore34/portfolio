/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/

#ifndef golds_hpp
#define golds_hpp
#include "spaces.hpp"

class Golds : public Spaces
{
public:
	Golds(std::string prize, std::string place);
	std::string riddle();
};

#endif /* golds_hpp */
