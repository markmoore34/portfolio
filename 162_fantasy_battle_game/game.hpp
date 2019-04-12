/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#ifndef game_hpp
#define game_hpp
#include <iostream>
#include <string>
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "bluemen.hpp"
#include "medusa.hpp"
#include "harrypotter.hpp"


class Game// this class only runs the game.
{
public:
	Game();
	void runGame();//calls all the functions individually
	void gameLoop(Character*, Character*);//the actual game. gets called 4 times, alternating arguments.
	void menuAttacker();//choose attacker
	void menuDefender();//choose defender
	void checkStrength(Character*, Character*);//used after each round to see if the DEFENDER is at 0 and lost.
	void playAgainMenu();
	void deleteHeap();
	
protected:
	
private:
	Character *p1;
	Character *p2;
	int round = 1;
	
};

#endif
