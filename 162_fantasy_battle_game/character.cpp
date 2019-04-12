/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#include "character.hpp"

Character::Character()
{
	armor = 1111;
	strengthPts = 2222;
	numLives = 3333;
	name = "generic";
}
Character::Character(std::string nam, int armr, int strength, int lives)
{
	name = nam;
	armor = armr;
	strengthPts = strength;
	numLives = lives;
	//std::cout << "TEST character created.";
}

int Character::getDamage(int oRoll, int dRoll)// does calculation of damage and returns new strength #
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
int Character::offensiveRollDice()//this is for the attacks of barbarian, medusa, and harrypotter. specify in each class
{
	return (roll6() + roll6());
}
int Character::defensiveRollDice()//this is for the defense of barbarian, and harrypotter. specify in each class
{
	return (roll6() + roll6());
}

int Character::roll12()
{
	int rando;
	rando = rand() % 12 + 1;
	return rando;
}
int Character::roll10()
{
	int rando;
	rando = rand() % 10 + 1;
	return rando;
}
int Character::roll6()
{
	int rando;
	rando = rand() % 6 + 1;
	return rando;
}
int Character::roll2()
{
	return ((rand() % 2) + 1);
}
