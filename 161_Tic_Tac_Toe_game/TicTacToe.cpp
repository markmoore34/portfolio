/******************************
 Name: Mark Moore
 Date: 080317
 Description: Assignment 9. create TicTacToe game that takes the coordinates of a move and places them on a 3x3 array so that two players can play tictactoe. The game reports back is a place is taken and who wins.
 **************************************************************/

//#include <cstdlib>
#include <iostream>
#include "TicTacToe.hpp"
#include "Board.hpp"

using namespace std;

int main()
{
	char fstplay;			//variable to store who will play first
	
	//TicTacToe whosFirst;	//tictactoe object
	
	cout << "Let's play TicTacToe!\n" << endl;

	cout << "Enter x or o to choose who will go first" << endl;
	
	cin >> fstplay;			//input who plays first
	
	//Board game1;			//create Board object to access 3x3 array
	
	TicTacToe whosFirst(fstplay);		//create tictactoe object and send who plays first
	
	whosFirst.play();		//call play function to start the game

	
	return 0;
}

TicTacToe::TicTacToe(char p1)
{
	if( p1 == 'o')
	{
		player1 = p1;
		player2 = 'x';
	}
}
	

void TicTacToe::play()
{
	Board game1;
	
	for(int i = 1; i<=9; i++)
	{
		game1.print();
		
		if(i % 2 == 1)		//player one makes a move
		{
			int freeSpot = 1;
			
			while(freeSpot == 1)
			{
				cout << "Player " << player1 << ", please enter your move." << endl;
				cin >> row;
				cin >> col;
					if(game1.makeMove(row, col, player1) == false)
					   {
					   cout << "I'm sorry, that square is already taken.\n" << endl;
					   }
				   else
					   {
						   freeSpot = 0;
					   }
			}
		}
		else			//player two makes a move
		{
			int freeSpot2 = 1;
			
			while(freeSpot2 == 1)
			{
				cout << "Player " << player2 << ", please enter your move." << endl;
				cin >> row;
				cin >> col;
					if(game1.makeMove(row, col, player2) == false)
					   {
					   cout << "I'm sorry, that square is already taken.\n" << endl;
					   }
				   
				   else
					   {
						   freeSpot2 = 0;
					   }
			}
		}
	
			game1.gameState();
		
	}
}


