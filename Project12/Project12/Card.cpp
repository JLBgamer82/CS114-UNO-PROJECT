#include "Card.h"
#include <string>
using namespace std;

Card::Card(string color, int number, string actionCard)
{
	suit = color;
	value = number;
	action = actionCard;
}

Card::~Card()
{
}

string Card::returnSuit()
{
	return suit;
}

int Card::returnValue()
{
	return value;
}

string Card::returnAction()
{
	return action;
}