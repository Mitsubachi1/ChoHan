#include "Player.h"
#include <iostream>
#include <string>
using namespace std;


void Player::setName(string newName) {
	name = newName;
	points = 0;
}
void Player::setGuess(string newGuess) {
	guess = newGuess;
}
void Player::addPoint() {
	points += 1;
}
string Player::getName() {
	return name;
}
string Player::getGuess() {
	return guess;
}
int Player::getPoints() {
	return points;
}