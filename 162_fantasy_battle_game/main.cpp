/*************************************************************
 Name: Mark Moore
 Date: 10.30.17
 Description: This program is a fantasy combat game. The user will choose two characters the the characters will battle to the death.
 ***************************************************************/

#include "game.hpp"
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	std::cout << "\n\tWelcome to The Generic Fantasy Game.\n___________________________________________________________\n" << std::endl;
	Game game1;
	game1.runGame();	
	
	return 0;
}
