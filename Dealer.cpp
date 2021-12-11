#include "Dealer.h"
#include "Die.h"
#include <iostream>
#include <string>
using namespace std;

void Dealer::rollDice() {
	die1.roll();
	die2.roll();
	
}
string Dealer::getChoOrHan() {
	if ((die1.getValue() + die2.getValue()) % 2 == 0) {
		cout << "Result: Cho(even)" << endl;
		return "Cho";
	}
	else {
		cout << "Result: Han(odd)" << endl;
		return "Han";
	}
}
int Dealer::getDie1Value() {
	return die1.getValue();
}
int Dealer::getDie2Value() {
	return die2.getValue();
}