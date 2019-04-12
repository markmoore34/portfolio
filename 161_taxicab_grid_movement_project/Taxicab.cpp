/******************************
 Name: Mark Moore
 Date: 072017
 Description: Taxicab class declaration. Will take movement commands and record current location and distance traveled. 
 **************************************************************/

#include <iostream>
#include <cmath>
#include "Taxicab.hpp"
using namespace std;

Taxicab::Taxicab()							//default. sets all 3 fields to 0
{
	xCoord = yCoord = distanceTraveled = 0;
}
	
	
Taxicab::Taxicab(int xcrd, int ycrd)				//initializes the starting coords and sets odom to 0.
{
    xCoord = xcrd;
    yCoord = ycrd;
	distanceTraveled = 0;
}

int Taxicab::getXCoord()
{
    return xCoord;
}

int Taxicab::getYCoord()
{
    return yCoord;
}


int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}


void Taxicab::moveX(int num)				//moves the x coord left or right and updates distance traveled
{
    xCoord = xCoord + num;
    distanceTraveled = distanceTraveled + abs(num);
}


void Taxicab::moveY(int num)						//moves the y coord up or down and updates distance traveled
{
	yCoord = yCoord + num;
	distanceTraveled = distanceTraveled + abs(num);
}

