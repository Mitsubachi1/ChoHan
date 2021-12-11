#ifndef DEALER_H
#define DEALER_H
#include "Die.h"
#include <string>
using namespace std;

class Dealer {
private: 
	Die die1;
	Die die2;
public:
	Dealer() {};
	void rollDice();
	string getChoOrHan();
	int getDie1Value();
	int getDie2Value();
};

#endif