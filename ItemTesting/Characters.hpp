//
//  Characters.hpp
//  ItemDemo
//
//  Created by Jacob Tuttle on 11/21/15.
//  Copyright © 2015 SomethingInc. All rights reserved.
//

#ifndef Characters_hpp
#define Characters_hpp

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <ostream>

class Characters {
public:
	// Constructors
	Characters();
	Characters(std::string name, int health, float speed); // with stuff
	// Destructor
	~Characters();

	// Prints item details
	void printDetails(std::ostream &out);

	//getters and setters
	std::string getName();
	void setName(std::string name);

	int getHealth();
	void setHealth(int health);

	float getSpeed();
	void setSpeed(float speed);

private:
	// Private Class Level Variables
	std::string mName;
	int mHealth;
	float mSpeed;
};

#endif /* Item_hpp */