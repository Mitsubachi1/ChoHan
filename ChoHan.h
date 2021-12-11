#ifndef CHOHAN_H
#define CHOHAN_H

#include "Player.h"
#include "Dealer.h"
#include <iostream>
#include <string>
using namespace std;

class ChoHan {
private:
	int maxRounds;
	Player player1;
	Player player2;
public:
	
	ChoHan(int numRounds);
	void start();
	void playRound();
	void checkGuess(Player& player, Dealer& dealer);
	void displayGrandWinner();


};
#endif // !CHOHAN_H
