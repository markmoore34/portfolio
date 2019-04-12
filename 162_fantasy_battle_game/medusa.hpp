/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/


#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "character.hpp"

class Medusa : public Character
{
public:
	Medusa();
	Medusa(std::string name, int armor, int strength, int lives);
	~Medusa();
	int getDamage(int oRoll, int dRoll);// gets roll number and calls specialDefense.. then adjusts variables accordingly.
	int offensiveRollDice();//general rolls dice. specify in each class
	int defensiveRollDice();// defined in classses
	
protected:
	
private:

};

#endif /* medusa_hpp */
