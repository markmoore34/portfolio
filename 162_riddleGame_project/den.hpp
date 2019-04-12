/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#ifndef den_hpp
#define den_hpp
#include "spaces.hpp"

class Den : public Spaces
{
public:
	Den(std::string prize, std::string place);
	std::string riddle();
};

#endif /* den_hpp */
