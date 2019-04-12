/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#include "bluemen.hpp"


Blueman::Blueman(std::string nam, int armr, int strength, int lives)
{
	name = nam;
	armor = armr;
	strengthPts = strength;
	numLives = lives;
	//std::cout << "\nTEST Vampire created.";
	//std::cout << name << "...." << armor << "...." << strengthPts << "...." << numLives << std::endl << std::endl;
}

int Blueman::getDamage(int oRoll, int dRoll)// gets roll number and calls specialDefense.. then adjusts variables accordingly.
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

int Blueman::offensiveRollDice()//general rolls dice. specify in each class
{
	return (roll10() + roll10());
}
int Blueman::defensiveRollDice()// defined in classes
{
	if(strengthPts <= 4)
		return roll6();
	else if(strengthPts <= 8)
		return (roll6() + roll6());
	else
		return (roll6() + roll6() + roll6());
}
