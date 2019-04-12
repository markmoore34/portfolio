/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#include "player.hpp"
#include <iostream>

void Player::intro()
{
	std::cout << "The Joker has stolen your Pokémon! \nYou have to travel to different mundane everyday locations \nto solve the riddles and get the clues to \nfigure out where your Pokémon has been hidden." << std::endl;
	//the prizes are C - H - O - O - E - _ - R....."Choose R"
	bedroom->setPtrs(NULL, den, osu, NULL);
	den->setPtrs(NULL, gym24, elem, bedroom);
	gym24->setPtrs(NULL, chili, gold, den);
	chili->setPtrs(NULL, NULL, bennigan, gym24);
	osu->setPtrs(bedroom, elem, NULL, NULL);
	elem->setPtrs(den, gold, NULL, osu);
	gold->setPtrs(gym24, bennigan, NULL, elem);
	bennigan->setPtrs(chili, NULL, NULL, gold);
	
	runGame();
}
void Player::runGame()//runs game
{
	printMap();
	while(numChoices < 11)//give menu...repeats till user solves puzzle or exhausts 10 tries.
	{
		std::cout << "\nWhere do you want to go? You have used " << numChoices << " turns." << std::endl;
		std::cout << "You have " << 10-numChoices << " turns left." << std::endl;
		
		//the prizes are C - H - O - O - E - _ - R....."Choose R". Put as a menu choice and the game is over.

		char choice;
		std::cout << "\n\tA : Bedroom.\n";//correct
		std::cout << "\tB : Den .\n";
		std::cout << "\tC : 24Hour Fitness.\n";
		std::cout << "\tD : Chili's Restaurant.\n";
		std::cout << "\tE : Oregon State Univ.\n";
		std::cout << "\tF : Your local elementry.\n";
		std::cout << "\tG : Gold's Gym.\n";
		std::cout << "\tH : Bennigan's restaurant.\n";
		std::cout << "\tI : See rewards collected.\n";
		std::cout << "\tJ : Find Pokémon.\n";
		std::cout << "\tK : Quit.\n\n";

		std::cin >> choice;
		choice = toupper(choice);//added to make whatever input they used an upper case.
		while(choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D' && choice != 'E' && choice != 'F' && choice != 'G' && choice != 'H' && choice != 'I' && choice != 'J' && choice != 'K' && choice != 'R')//choice validation
		{
			std::cout << "\nPlease enter a valid letter.\n";
			std::cin >> choice;
			choice = toupper(choice);//added to make whatever input they used an upper case.
		}

//the prizes are C - H - O - O - E - _ - R....."Choose R". Put as a menu choice and the game is over.

		switch(choice)
		{
			case 'A' : prize = new Prizes(prize, bedroom->riddle());
				numChoices++;
				break;
			case 'B' : prize = new Prizes(prize, den->riddle());
				numChoices++;
				break;
			case 'C' : prize = new Prizes(prize, gym24->riddle());
				numChoices++;
				break;
			case 'D' : prize = new Prizes(prize, chili->riddle());
				numChoices++;
				break;
			case 'E' : prize = new Prizes(prize, osu->riddle());
				numChoices++;
				break;
			case 'F' : prize = new Prizes(prize, elem->riddle());
				numChoices++;
				break;
			case 'G' : prize = new Prizes(prize, gold->riddle());
				numChoices++;
				break;
			case 'H' : prize = new Prizes(prize, bennigan->riddle());
				numChoices++;
				break;
			case 'I' : dispPrizes();
				break;
			case 'J' : std::cout << "OK. SOOOOOOOOOO????????????" << std::endl;
				break;
			case 'K' : 	deletePrizes();
						deleteObjects();
						exit(0);
				break;
//the prizes are C - H - O - O - E - _ - R....."Choose R". Put as a menu choice and the game is over.
			case 'R' : winner();
		}
	}
	std::cout << "\nYou have exhausted you 10 turns. You Lose." << std::endl;
	deletePrizes();
	deleteObjects();
	exit(0);
}

void Player::dispPrizes()//shows prizes earned so far. auto returns to runGame().
{
	Prizes *temp;
	temp = prize;
	
	if(temp == NULL)
		std::cout << "You don't have any prizes yet." << std::endl;
	else
	{
		std::cout << "Your prizes collected so far are - " << std::endl;
		while(temp != NULL)
		{
			std::cout << temp->prize << " - ";
			temp = temp->next;
		}
	}
	std::cout << std::endl << std::endl;
}

void Player::deleteObjects()
{
	delete bedroom;
	delete den;
	delete gym24;
	delete chili;
	delete osu;
	delete elem;
	delete gold;
	delete bennigan;
}

void Player::deletePrizes()
{
	if(prize->next == NULL)
		delete prize;
	else
	{
		while(prize != NULL)
		{
			Prizes *temp;
			temp = prize;
			prize = prize->next;
			delete temp;
		}
	}
}

void Player::printMap()
{
	std::cout << "\n\tThis is your neighborhood." << std::endl << std::endl;
	std::cout << "\t____________     ____________     ____________     ____________\n";
	std::cout << "\t- BEDROOM  -=====-    DEN   -=====-  24HOUR  -=====- CHILI'S  -\n";
	std::cout << "\t^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^\n";
	std::cout << "\t     ||               ||               ||               ||     \n";
	std::cout << "\t____________     ____________     ____________     ____________\n";
	std::cout << "\t-    OSU   -=====-ELEMENTARY-=====-  GOLD'S  -=====-BENNIGAN'S-\n";
	std::cout << "\t^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^     ^^^^^^^^^^^^\n";
}

void Player::winner()
{
	std::cout << "\n\nCongratulations! you figured out the final riddle! You found your Pokémon.\n" << std::endl;
	deletePrizes();
	deleteObjects();
	exit(0);
}








