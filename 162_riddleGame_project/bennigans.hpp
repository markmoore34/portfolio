//
//  bennigans.hpp
//  finalProject
//
//  Created by Mark Moore on 12/1/17.
//  Copyright © 2017 Mark Moore. All rights reserved.
//

#ifndef bennigans_hpp
#define bennigans_hpp
#include "spaces.hpp"

class Bennigans : public Spaces
{
public:
	Bennigans(std::string prize, std::string place);
	std::string riddle();
};


#endif /* bennigans_hpp */
