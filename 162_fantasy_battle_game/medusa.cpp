/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#include "medusa.hpp"


Medusa::Medusa(std::string nam, int armr, int strength, int lives)
{
	name = nam;
	armor = armr;
	strengthPts = strength;
	numLives = lives;
	//std::cout << "\nTEST Vampire created.";
	//std::cout << name << "...." << armor << "...." << strengthPts << "...." << numLives << std::endl << std::endl;
}

int Medusa::getDamage(int oRoll, int dRoll)// gets roll number and calls specialDefense.. then adjusts variables accordingly.
{
	int damage = (oRoll - dRoll - armor);
	if(damage >= 0)
	{
		strengthPts-=damage;
		return damage;
	}
	else
	{
		return 0;
	}
}

int Medusa::offensiveRollDice()//general rolls dice. specify in each class
{
	int roll = (roll6() + roll6());
	
	if(roll == 12)
	{
		roll = 40;
		return roll;
	}
	
	return roll;
}
int Medusa::defensiveRollDice()// defined in classes
{
	return roll6();
}
