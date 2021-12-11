#ifndef DIE_H
#define DIE_H

class Die {
private:
	int sides;
	int value;
public:
	Die();
	Die(int numSides);
	void roll();
	int getSides();
	int getValue();
};


#endif