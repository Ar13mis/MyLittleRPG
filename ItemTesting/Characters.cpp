//
//  Characters.cpp
//  ItemDemo
//
//  Created by Jacob Tuttle on 11/21/15.
//  Copyright © 2015 SomethingInc. All rights reserved.
//

#include "stdafx.h"
#include "Characters.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

// Default Constructor, set some default values
Characters::Characters()
	: mName("")
	, mHealth(10)
	, mSpeed(0.5)
	//, mSprite(sf::Vector2f(40, 40))
{
	mSprite.setPosition(10, 10);
}

// Convenience Constructor, allows easy setting of class level variables
Characters::Characters(std::string name, int health, float speed)
	: mName(name)
	, mHealth(health)
	, mSpeed(speed)
	//, mSprite(sf::Vector2f(40, 40))
{
	// Do more constructing here if you would like
	if (!mTexture.loadFromFile("Images/Bob-Ross2.jpg"))
	{
		
	}
	mSprite.setPosition(10, 10);
}

//Destructor
Characters::~Characters() 
{

}

// Print Item Details
void Characters::printDetails(std::ostream &out)
{
	out << mName << std::endl;
	out << "  Health: " << mHealth << std::endl;
	out << "  Speed:  " << mSpeed << std::endl;
}

void Characters::move(sf::Vector2f offset)
{
	setPosition(getPosition() + offset);
}

void Characters::move(float x, float y)
{
	move(sf::Vector2f(x, y));
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

sf::Vector2f Characters::getPosition()
{
	return mPosition;
}

void Characters::setPosition(sf::Vector2f position)
{
	mSprite.setPosition(position);
	mPosition = position;
}

void Characters::setPosition(float x, float y)
{
	setPosition(sf::Vector2f(x, y));
}

void Characters::setTexture(sf::Texture texture)
{
	mTexture = texture;
}

void Characters::setTexture(std::string fileName)
{
	if (!mTexture.loadFromFile("Images/"  + fileName))
	{
		std::cout << "Failed to load image: Images/" << fileName << std::endl;
	}
}

sf::Sprite Characters::getShape()
{
	return mSprite;
}