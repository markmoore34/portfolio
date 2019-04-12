/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/

#ifndef player_hpp
#define player_hpp
#include "spaces.hpp"
#include "house.hpp"
#include "school.hpp"
#include "gym.hpp"
#include "restaurant.hpp"
#include "prizes.hpp"
#include "bennigans.hpp"
#include "osu.hpp"
#include "den.hpp"
#include "golds.hpp"
#include <iostream>

class Player
{
public:
	void runGame();			//runs game
	void dispPrizes();		//for the player to see his prizes.
	void deleteObjects();
	void deletePrizes();
	void intro();
	void printMap();
	void winner();
	
protected:
	
private:
	int numChoices = 0;
	std::string reward;
	//Spaces *p1;
	House *bedroom = new House("C", "BEDROOM");//
	Den *den = new Den("H", "DEN");//NEW.........
	Gym *gym24 = new Gym("S", "24Hour");//
	Restaurant *chili = new Restaurant("_", "CHILI'S");//
	Osu *osu = new Osu("O", "OSU");//NEW.............
	School *elem = new School("O", "ELEMENTARY");//
	Golds *gold = new Golds("E", "GOLD'S");//NEW........
	Bennigans *bennigan = new Bennigans("R", "BENNIGAN'S");//new ......
	Prizes *prize = NULL;// new Prizes prizes();// how to connect them???
};
#endif /* player_hpp */
