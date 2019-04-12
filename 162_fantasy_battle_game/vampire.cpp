/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#include "vampire.hpp"
Vampire::Vampire(std::string nam, int armr, int strength, int lives)
{
	name = nam;
	armor = armr;
	strengthPts = strength;
	numLives = lives;
	//std::cout << "\nTEST Vampire created.";
	//std::cout << name << "...." << armor << "...." << strengthPts << "...." << numLives << std::endl << std::endl;
}

int Vampire::getDamage(int oRol, int dRol)// gets roll number and calls specialDefense.. then adjusts variables accordingly.
{
	int damage;
	int charm = roll2();
	if(charm == 1)// CHARMED. no damage
		return 0;
	else
		damage = (oRol - dRol - armor);
		if(damage >= 0)
		{
			strengthPts -= damage;
			return damage;
		}
		else
		{
			damage = 0;
			return damage;
		}
}

int Vampire::offensiveRollDice()//general rolls dice. specify in each class
{
	return roll12();
}
int Vampire::defensiveRollDice()// defined in classes
{
	return roll6();
}
