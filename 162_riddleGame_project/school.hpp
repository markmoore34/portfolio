/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#ifndef school_hpp
#define school_hpp
#include "spaces.hpp"

class School : public Spaces
{
public:
	School(std::string prize, std::string place);
	std::string riddle();
};



#endif /* school_hpp */
