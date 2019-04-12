/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "character.hpp"


class Barbarian : public Character
{
public:
	Barbarian();
	Barbarian(std::string name, int armor, int strength, int lives);
	~Barbarian();
	int getDamage(int oRoll, int dRoll);// gets roll number and calls specialDefense.. then adjusts variables accordingly.
	
protected:
	
private:
	
};

#endif /* barbarian_hpp */
