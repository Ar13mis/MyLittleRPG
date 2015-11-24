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
#include <sfml/Graphics.hpp>

class Characters {
public:
	// Constructors
	Characters();
	Characters(std::string name, int health, float speed); // with stuff
	// Destructor
	~Characters();

	// Prints item details
	void printDetails(std::ostream &out);

	// Move
	void move(sf::Vector2f offset);
	void move(float x, float y);

	//getters and setters
	std::string getName();
	void setName(std::string name);

	int getHealth();
	void setHealth(int health);

	float getSpeed();
	void setSpeed(float speed);

	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f position);
	void setPosition(float x, float y);

	void setTexture(sf::Texture texture);
	void setTexture(std::string fileName);

	sf::Sprite getShape();

protected:
	// Private Class Level Variables
	std::string mName;
	int mHealth;
	float mSpeed;
	sf::Vector2f mPosition;
	sf::Sprite mSprite;
	sf::Texture mTexture;
};

#endif /* Item_hpp */