/*************************************************************
 Name: Mark Moore
 Date: 11.23.17
 Description: This program will be a themed game in which the
 player has to collect things in order to solve a problem.
 **************************************************************/


#ifndef spaces_hpp
#define spaces_hpp
#include <iostream>


class Spaces
{
public:
	Spaces();
	Spaces(std::string prize, std::string place);
	void printMap();
	virtual std::string riddle() = 0;
	void setPtrs(Spaces*, Spaces*, Spaces*, Spaces*);
	
	
protected:
	std::string NONprize = "__";
	Spaces*up = NULL;
	Spaces*right = NULL;
	Spaces*down = NULL;
	Spaces*left = NULL;
	std::string prize;
	std::string place = "Spaces";
private:
	
};
#endif /* spaces_hpp */
