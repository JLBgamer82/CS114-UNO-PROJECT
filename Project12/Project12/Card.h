#pragma once
class Card
{
public:
	//Constructors for the card class.
	Card(string color, int number, string actionCard);
	~Card();

	//Returns the value of the cards.
	string returnSuit();
	int returnValue();
	string returnAction();

private:
	string suit;
	int value;
	string action;
};

