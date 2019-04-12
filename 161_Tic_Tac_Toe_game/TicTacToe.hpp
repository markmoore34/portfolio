/******************************
 Name: Mark Moore
 Date: 080317
 Description:  assignment 9. create TicTacToe game that takes the coordinates of a move and places them on a 3x3 array so that two players can play tictactoe. The game reports back is a place is taken and who wins.
 **************************************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
//#include <string>

using namespace std;

class TicTacToe

{
	
	//private:
public:
	char player1 = 'x';
	char player2 = 'o';
	int row;
	int col;
	
	
public:
	TicTacToe();
	
	TicTacToe(char p1);
	
	void play();
	
};
#endif
