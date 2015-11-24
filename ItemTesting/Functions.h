#pragma once
#include "Characters.hpp"
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

void MovingAround(Characters &shape);
void DecidePosition(Characters &shape, int &windowX, int &windowY, int &characterX);
sf::RectangleShape RectanglePosition(sf::RectangleShape shape, float windowX, float windowY);
bool Collision(sf::RectangleShape object1, sf::RectangleShape object2);
int RandomNumber(int myMod);

std::vector<sf::RectangleShape> CreateEnemies(std::vector<sf::RectangleShape>& enemies, int difficulty, float rectX, float rectY);

#endif