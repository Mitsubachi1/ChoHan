#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {
private:
	string name;
	string guess;
	int points;
public:
	void setName(string newName);
	void setGuess(string newGuess);
	void addPoint();
	string getName();
	string getGuess();
	int getPoints();

};

#endif