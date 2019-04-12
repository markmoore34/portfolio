/******************************
 Name: Mark Moore
 Date: 072017
 Description: Taxicab class declaration. Will take movement commands and record current location and distance traveled.
 **************************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include "Taxicab.hpp"

using namespace std;

int main()
{
	int xCoord, yCoord, xmove, ymove, choice;
	
	cout << "enter a starting x location.\n";
	cin >> xCoord;
	
	cout << "enter a starting y location.\n";
	cin >> yCoord;
	
	Taxicab taxistart;
	
	Taxicab taximove(xCoord, yCoord);
	
	do
	{
		cout << "Press 1 to move along the x-axis.\n";
		cout << "Press 2 to move along the y-axis.\n";
		cout << "Press 3 to quit.\n";
		cin >> choice;
		
		/***************
		 while(choice != 1 || 2)
		{
			cout << "Please enter 1, 2 or 3.\n";
			cin >> choice;
		}
		**************************/
	
		 
		if(choice == 1)
		{
			cout << "How far?\n";
			cin >> xmove;
			taximove.moveX(xmove);
		}
		
		if(choice == 2)
		{
			cout << "How far?\n";
			cin >> ymove;
			taximove.moveY(ymove);
		}
	} while(choice != 3);
	
	cout << "The X coordinate is " << taximove.getXCoord() << ".\n";
	cout << "The Y coordinate is " << taximove.getYCoord() << ".\n";
	cout << "The total distance traveled is " << taximove.getDistanceTraveled() << endl;
	
	
	return 0;
}



