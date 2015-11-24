//
//  main.cpp
//  ItemDemo
//
//  Created by Connor Brewster on 11/16/15.
//  Copyright © 2015 SomethingInc. All rights reserved.
//

#include "stdafx.h"
#include "Item.hpp"
#include "Characters.hpp"
#include "Functions.h"
#include <sfml/Graphics.hpp>
#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

void printItems(const std::vector<Item*> &items);
void printCharacters(Characters character);
std::vector<Item*> generateItems(std::vector<Item*> items, std::string name, int cost, float weight, float damage);
std::string generateCharacters(std::string name, int health, float speed);

int main(int argc, const char * argv[]) {
	// declare vector
	std::vector<Item*> items;

	//declare variables
	int windowX = 800;
	int windowY = 600;
	int characterSize = 40;

	//create character
	Characters character("Character", 100, 5.0f);
	character.setSpeed(1.0f);

	//generate items (name, cost, weight, damage)
	items = generateItems(items, "Dagger of Suffering", 14, 4, 7.5f);
	items = generateItems(items, "Broadsword", 30, 12, 15.5f);

	//print out all of the items
	printItems(items);

	//print the character
	printCharacters(character);

	// create the window
	sf::RenderWindow window(sf::VideoMode(windowX, windowY), "My window");

	// run the program as long as the window is open
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}

		MovingAround(character);
		DecidePosition(character, windowX, windowY, characterSize);

		// clear the window with black color
		window.clear(sf::Color::Black);

		// draw everything here...
		window.draw(character.getShape());

		// end the current frame
		window.display();
	}


	return 0;
}

//print out all of the items
void printItems(const std::vector<Item*> &items) 
{

	for (auto it = items.begin(); it != items.end(); ++it) 
	{

		Item *item = *it;
		item->printDetails(std::cout);

	}
}

//print out all of the characters
void printCharacters(Characters character)
{

	std::cout << "Name: " << character.getName() << std::endl;
	std::cout << "  Health: " << character.getHealth() << std::endl;
	std::cout << "   Speed: " << character.getSpeed() << std::endl;
	
}

//create an item and put it in the vector
std::vector<Item*> generateItems(std::vector<Item*> items, std::string name, int cost, float weight, float damage) 
{

	Item *item = new Item(name, cost, weight, damage);
	items.push_back(item);

	return items;

}

/*/generate characters
std::string generateCharacters(std::string name, int health, float speed) 
{

	//sf::RectangleShape character = new Characters();

	std::string *myName = new std::string "Hello";

	return *myName;

}*/

/*
sf::RectangleShape movingAround(sf::RectangleShape shape, std::vector<Characters*> character) 
{

	//get speed
	float speed;

}*/