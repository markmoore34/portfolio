/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>

class Character
{
public:
	Character();
	Character(std::string name, int armor, int strength, int lives);
	~Character()
	{
		//std::cout << "Character destroyed" << std::endl;
	}
	void setName(std::string name)
	{this->name = name;}
	
	void setArmor(int num)
	{this->armor = num;}
	
	void setStrength(int strong)
	{this->strengthPts = strong;}
	
	void setLives(int life)
	{this->numLives = life;}
	
	std::string getName()
	{return name;}
	
	int getArmor()
	{return armor;}
	
	int getStrength()
	{return strengthPts;}
	
	int getLives()
	{return numLives;}
	
	int attack(int dieRoll);//gets roll and sends roll to special attack.
	int specialAttack(int roll);//receives from attack to amplify attack.. or not. define in classes
	int getDamage(int, int);// gets roll number and calls specialDefense.. then adjusts variables accordingly and returns new strength number.
	int specialDefend(int defRoll);//
	int offensiveRollDice();//general rolls dice. specify in each class
	int defensiveRollDice();// defined in classses
	int roll12();//returns random number 1 - 12
	int roll10();//returns random number 1 - 10
	int roll6();//returns random number 1 - 6
	int roll2();

protected:
	int armor;
	int strengthPts;
	int numLives;
	std::string name;
private:

	
};
#endif
