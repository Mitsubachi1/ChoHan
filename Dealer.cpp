#include "Dealer.h"
#include "Die.h"
#include <iostream>
#include <string>
using namespace std;

void Dealer::rollDice() { //calls the roll function in the die class
	die1.roll();
	die2.roll();
	
}
string Dealer::getChoOrHan() { //takes Die Roll(); function values and checks if it is even or odd when both added
	if ((die1.getValue() + die2.getValue()) % 2 == 0) {
		cout << "Result: Cho(even)" << endl;
		return "Cho";
	}
	else {
		cout << "Result: Han(odd)" << endl;
		return "Han";
	}
}
int Dealer::getDie1Value() { //grabs first die value
	return die1.getValue();
}
int Dealer::getDie2Value() { //grabs second die value
	return die2.getValue();
}