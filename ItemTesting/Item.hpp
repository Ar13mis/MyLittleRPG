//
//  Item.hpp
//  ItemDemo
//
//  Created by Connor Brewster on 11/16/15.
//  Copyright © 2015 SomethingInc. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <ostream>

class Item {
public:
	// Constructors
	Item();
	Item(std::string name, int cost, float weight, float damage);
	// Destructor
	~Item();

	// Prints item details
	void printDetails(std::ostream &out);

	// Getters and Setters
	int getCost();
	void setCost(int cost);

	std::string getName();
	void setName(std::string name);

	float getWeight();
	void setWeight(float weight);

	float getDamage();
	void setDamage(float damage);

private:
	// Private Class Level Variables
	int mCost;
	std::string mName;
	float mWeight;
	float mDamage;
};

#endif /* Item_hpp */


