#include "ChoHan.h"
#include "Dealer.h"
#include <iostream>
#include <string>
using namespace std;


ChoHan::ChoHan(int numRounds) {
	maxRounds = numRounds;
	Die sides(6);
	start();

}
void ChoHan::start() {
	
	string player1name, player2name;
	cout << "Welcome to the game of Cho-Han!" << endl;
	cout << "Enter the first player's name: ";
	getline(cin, player1name);
	
	cout << "Enter the second player's name: ";
	getline(cin, player2name);
	player1.setName(player1name);
	player2.setName(player2name);
	for (int i = 0; i < maxRounds; i++)
	{
		cout << "----------------------------\n";
		cout << "Now playing round " << (i + 1)
			<< endl;

		playRound();
	}
	displayGrandWinner();
}
void ChoHan::playRound() {
	Dealer dealer;
	string guess;
	dealer.rollDice();
	cout << "Enter the guess for player " << player1.getName() << ": ";
	cin >> guess;
	player1.setGuess(guess);
	cout << "Enter the guess for player " << player2.getName() << ": ";
	cin >> guess;
	player2.setGuess(guess);
	cout << "Dealer rolled " << dealer.getDie1Value() << " and " << dealer.getDie2Value() << endl;
	cout << dealer.getChoOrHan() << endl;
	checkGuess(player1,dealer);
	checkGuess(player2, dealer);
	

}
void ChoHan::checkGuess(Player& player, Dealer& dealer) {
	
	string guess = player.getGuess(); 
	cout << player.getName() << " guessed " << player.getGuess() << endl;
	if (guess == dealer.getChoOrHan()) {
		player.addPoint();
		cout << player.getName() << " guessed correctly. + 1 point" << endl;
	}
}
void ChoHan::displayGrandWinner() {
	
	cout << "----------------------------\n";
	cout << "Game over. Here are the results:\n";

	// Display player #1's results.
	cout << player1.getName() << ": "
		<< player1.getPoints() << " points\n";

	// Display player #2's results.
	cout << player2.getName() << ": "
		<< player2.getPoints() << " points\n";

	// Determine the grand winner.
	if (player1.getPoints() > player2.getPoints())
	{
		cout << player1.getName()
			<< " is the grand winner!\n";
	}
	else if (player2.getPoints() > player1.getPoints())
	{
		cout << player2.getName()
			<< " is the grand winner!\n";
	}
	else
	{
		cout << "Both players are tied!\n";

	}

}