/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#include "barbarian.hpp"


Barbarian::Barbarian(std::string nam, int armr, int strength, int lives)
{
	name = nam;
	armor = armr;
	strengthPts = strength;
	numLives = lives;
	//std::cout << "\nTEST Vampire created.";
	//std::cout << name << "...." << armor << "...." << strengthPts << "...." << numLives << std::endl << std::endl;
}

int Barbarian::getDamage(int oRoll, int dRoll)// gets roll number and calls specialDefense.. then adjusts variables accordingly.
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


