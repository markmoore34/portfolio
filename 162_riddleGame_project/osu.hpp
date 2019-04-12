/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/

#ifndef osu_hpp
#define osu_hpp
#include "spaces.hpp"

class Osu : public Spaces
{
public:
	Osu(std::string prize, std::string place);
	std::string riddle();
};


#endif /* osu_hpp */
