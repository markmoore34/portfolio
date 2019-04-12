/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#ifndef gym_hpp
#define gym_hpp
#include "spaces.hpp"

class Gym : public Spaces
{
public:
	Gym(std::string prize, std::string place);
	std::string riddle();
};


#endif /* gym_hpp */
