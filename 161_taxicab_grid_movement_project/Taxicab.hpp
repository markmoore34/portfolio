/******************************
 Name: Mark Moore
 Date: 072017
 Description: Taxicab class declaration. Will take movement commands and record current location and distance traveled. 
 **************************************************************/


#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
	private:
		int xCoord;
		int yCoord;
		int distanceTraveled;

	public:
		Taxicab();			//sets all 3 fields to 0
		Taxicab(int, int);		//initializes the coords and odom to 0.
		int getXCoord();	
		int getYCoord();
		int getDistanceTraveled();
		void moveX(int);
		void moveY(int);

};
#endif
