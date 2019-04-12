/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/


#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "character.hpp"
#include <cmath>

class Vampire : public Character
{
public:
	Vampire();
	Vampire(std::string name, int armor, int strength, int lives);
	~Vampire();
	int attack(int dieRoll);//gets roll and sends roll to special attack.
	int specialAttack(int roll);//receives from attack to amplify attack.. or not. define in classes
	int getDamage(int, int);// gets roll number and calls specialDefense.. then adjusts variables accordingly.
	int offensiveRollDice();//general rolls dice. specify in each class
	int defensiveRollDice();// defined in classses

protected:
	
private:
	
};

#endif
