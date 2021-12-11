#include<cstdlib>
#include<ctime>
#include<iostream>
#include "Die.h"
using namespace std;

Die::Die() {
	sides = 6; //As this game involves (2) 6 sided dice, default value is 6 unless if called with different value
	value = 0;
}
Die::Die(int numSides) { //enables the random number generator given time
	sides = numSides;
	srand(time(NULL));
	
}
void Die::roll() {
	
	value = rand() % sides + 1; //takes a RNG from 1 to given sides
	
}
int Die::getSides() { //gets sides of the die
	return sides;
}
int Die::getValue() { //grabs value of die
	return value;
}
