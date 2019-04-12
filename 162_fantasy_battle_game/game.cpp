/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#include "game.hpp"

Game::Game()
{}
void Game::runGame()
{
	menuAttacker();
	menuDefender();
	gameLoop(p1, p2);
}

void Game::gameLoop(Character* p1, Character* p2)//the actual game. will be called 4 times.
{
	std::cout << std::endl << std::endl << "Round: " << round << std::endl << std::endl;
	round++;
	std::cout << p1->getName() << " attacks." << std::endl;
	std::cout << p2->getName() << " defends with armor level " << p2->getArmor()
				<< " and strength level " << p2->getStrength() << std::endl;
	
	int p1roll = p1->offensiveRollDice();
	std::cout << "The " << p1->getName() << " rolled a " << p1roll << std::endl;
	
	int p2roll = p2->defensiveRollDice();
	std::cout << "The " << p2->getName() << " defended with a roll of "
			<< p2roll << std::endl;
	
	std:: cout << p1roll << " - " << p2roll << " - " << p2->getArmor() << " = "
			<< p2->getDamage(p1roll, p2roll) << std::endl;

	std::cout << p2->getName() << "'s new strength is " << p2->getStrength() << std::endl;
	
	checkStrength(p1, p2);
}

void Game::menuAttacker()//menu to choose attacker and assign p1 pointer
{
	char choice;
	std::cout << "Please choose an ATTACKER option.\n";
	std::cout << "\tA : Vampire.\n";
	std::cout << "\tB : Barbarian.\n";
	std::cout << "\tC : Bluemen.\n";
	std::cout << "\tD : Medusa.\n";
	std::cout << "\tE : Harry Potter.\n";
	std::cout << "\tF : Quit.\n";
	std::cin >> choice;
	choice = toupper(choice);//added to make whatever input they used an upper case.
	while(choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D' && choice != 'E' && choice != 'F')	//choice validation
	{
		std::cout << "Please enter A, B, C, D, E, or F.\n";
		std::cin >> choice;
		choice = toupper(choice);//added to make whatever input they used an upper case.
	}
	switch(choice)
	{
		case 'A' : p1 = new Vampire(" Vampire ", 1, 18, 1);
			break;
		case 'B' : p1 = new Barbarian(" Barbarian ", 0, 12, 1);
			break;
		case 'C' : p1 = new Blueman(" Blue Men ", 3, 12, 1);
			break;
		case 'D' : p1 = new Medusa(" Medusa ", 3, 8, 1);
			break;
		case 'E' : p1 = new Harrypotter(" Harry Potter ", 0, 10, 2);
			break;
		case 'F' : std::cout << " OK. Bye. "; exit(0);
	}
}

void Game::menuDefender()//menu to choose defender and assign p2 pointer
{
	char choice;
	std::cout << "Please choose an DEFENDER option.\n";
	std::cout << "\tA : Vampire.\n";
	std::cout << "\tB : Barbarian.\n";
	std::cout << "\tC : Bluemen.\n";
	std::cout << "\tD : Medusa.\n";
	std::cout << "\tE : Harry Potter.\n";
	std::cout << "\tF : Quit.\n";
	std::cin >> choice;
	choice = toupper(choice);//added to make whatever input they used an upper case.
	while(choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D' && choice != 'E' && choice != 'F')	//choice validation
	{
		std::cout << "Please enter A, B, C, D, E, or F.\n";
		std::cin >> choice;
		choice = toupper(choice);//added to make whatever input they used an upper case.
	}
	switch(choice)
	{
		case 'A' : p2 = new Vampire("Vampire", 1, 18, 1);
			break;
		case 'B' : p2 = new Barbarian("Barbarian", 0, 12, 1);
			break;
		case 'C' : p2 = new Blueman("Blue Men", 3, 12, 1);
			break;
		case 'D' : p2 = new Medusa("Medusa", 3, 8, 1);
			break;
		case 'E' : p2 = new Harrypotter("Harry Potter", 0, 10, 2);
			break;
		case 'F' : std::cout << "OK. Bye."; exit(0);
	}
}

void Game::checkStrength(Character* attacker, Character* defender)//used after the round to see if the DEFENDER is at 0 and lost.
{
	if(defender->getStrength() <= 0)
	{
		std::cout << "\n______________________________________________________\n\tLooks like " << defender->getName() << " is Dead.\n______________________________________________________\n" << std::endl << std::endl;
		deleteHeap();
		playAgainMenu();
	}
	else
		gameLoop(defender, attacker);
}

void Game::playAgainMenu()
{
	char choice;
	std::cout << "Please choose an option.\n";
	std::cout << "\tA : PLAY AGAIN.\n";
	std::cout << "\tB : Quit.\n";
	std::cin >> choice;
	choice = toupper(choice);//added to make whatever input they used an upper case.

	while(choice != 'A' && choice != 'B')	//choice validation
	{
		std::cout << "Please enter A or B.\n";
		std::cin >> choice;
		choice = toupper(choice);//added to make whatever input they used an upper case.
	}
	switch(choice)
	{
		case 'A' : deleteHeap();
			round = 1;
			runGame();
			break;
		case 'B' : std::cout << "OK. Bye."; exit(0);
	}
}

void Game::deleteHeap()
{
	delete p1;
	delete p2;
}
