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
#include <sfml/Graphics.hpp>
#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

void printItems(const std::vector<Item*> &items);
void printCharacters(const std::vector<Characters*> &character);
std::vector<Item*> generateItems(std::vector<Item*> items, std::string name, int cost, float weight, float damage);
std::vector<Characters*> generateCharacters(std::vector<Characters*> myCharacter, std::string name, int health, float speed);

int main(int argc, const char * argv[]) {
	// declare vector
	std::vector<Item*> items;
	std::vector<Characters*> characters;

	//create character
	sf::RectangleShape character(sf::Vector2f(40, 40));
	character.setFillColor(sf::Color(200, 0, 200, 255));
	character.setPosition(10, 10);

	//generate items (name, cost, weight, damage)
	items = generateItems(items, "Dagger of Suffering", 14, 4, 7.5);
	items = generateItems(items, "Broadsword", 30, 12, 15.5);

	//print out all of the items
	printItems(items);

	//generate characters (name, health, speed)
	characters = generateCharacters(characters, "Ara'teil", 15, 1.0);

	//print out all of the characters
	printCharacters(characters);

	// create the window
	sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

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

		// clear the window with black color
		window.clear(sf::Color::Black);

		// draw everything here...
		window.draw(character);

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
void printCharacters(const std::vector<Characters*> &character) 
{

	for (auto it = character.begin(); it != character.end(); ++it) 
	{
	
		Characters *character = *it;
		character->printDetails(std::cout);
	
	}
}

//create an item and put it in the vector
std::vector<Item*> generateItems(std::vector<Item*> items, std::string name, int cost, float weight, float damage) 
{

	Item *item = new Item(name, cost, weight, damage);
	items.push_back(item);

	return items;

}

//generate characters
std::vector<Characters*> generateCharacters(std::vector<Characters*> myCharacter, std::string name, int health, float speed) 
{

	Characters *character = new Characters(name, health, speed);
	myCharacter.push_back(character);

	return myCharacter;

}

sf::RectangleShape movingAround(sf::RectangleShape shape, std::vector<Characters*> character) 
{

	//get speed
	float speed;
	Characters::getSpeed(speed);
}