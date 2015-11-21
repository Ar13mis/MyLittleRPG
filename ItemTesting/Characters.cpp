//
//  Characters.cpp
//  ItemDemo
//
//  Created by Jacob Tuttle on 11/21/15.
//  Copyright © 2015 SomethingInc. All rights reserved.
//

#include "stdafx.h"
#include "Characters.hpp"


// Default Constructor, set some default values
Characters::Characters()
	: mName("")
	, mHealth(10)
	, mSpeed(0.5)
{

}

// Convenience Constructor, allows easy setting of class level variables
Characters::Characters(std::string name, int health, float speed)
	: mName(name)
	, mHealth(health)
	, mSpeed(speed)
{
	// Do more constructing here if you would like
}

// Print Item Details
void Characters::printDetails(std::ostream &out)
{
	out << mName << std::endl;
	out << "  Health: " << mHealth << std::endl;
	out << "  Speed:  " << mSpeed << std::endl;
}

//getters and setters
std::string Characters::getName() 
{
	return mName;
}

void Characters::setName(std::string name) 
{
	mName = name;
}

int Characters::getHealth()
{
	return mHealth;
}

void Characters::setHealth(int health) 
{
	mHealth = health;
}

float Characters::getSpeed() 
{
	return mSpeed;
}

void Characters::setSpeed(float speed)
{
	mSpeed = speed;
}
