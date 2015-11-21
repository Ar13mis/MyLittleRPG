//
//  Item.cpp
//  ItemDemo
//
//  Created by Connor Brewster on 11/16/15.
//  Copyright © 2015 SomethingInc. All rights reserved.
//

#include "stdafx.h"
#include "Item.hpp"


// Default Constructor, set some default values
Item::Item()
	: mName("")
	, mCost(0)
	, mWeight(0)
	, mDamage(0)
{

}

// Convenience Constructor, allows easy setting of class level variables
Item::Item(std::string name, int cost, float weight, float damage)
	: mName(name)
	, mCost(cost)
	, mWeight(weight)
	, mDamage(damage)
{
	// Do more constructing here if you would like
}

// Print Item Details
void Item::printDetails(std::ostream &out)
{
	out << mName << std::endl;
	out << "  Cost:   " << mCost << std::endl;
	out << "  Weight: " << mWeight << std::endl;
	out << "  Damage: " << mDamage << std::endl;
}

// Getters and Setters for good practice
int Item::getCost()
{
	return mCost;
}

void Item::setCost(int cost)
{
	mCost = cost;
}

std::string Item::getName()
{
	return mName;
}

void Item::setName(std::string name)
{
	mName = name;
}

float Item::getWeight()
{
	return mWeight;
}

void Item::setWeight(float weight)
{
	mWeight = weight;
}

float Item::getDamage() 
{
	return mDamage;
}

void Item::setDamage(float damage)
{
	mDamage = damage;
}