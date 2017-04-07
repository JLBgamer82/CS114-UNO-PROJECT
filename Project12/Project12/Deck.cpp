#include "Deck.h"
#include "Card.h"
#include <vector>
using namespace std;

Deck::Deck()
{
	string colorSet;
	string actionSet;

	for (int color = 1;color <= 5;color++)
	{
		switch (color)
		{
			case 1:
			{
				colorSet = "Red";
				break;
			}
			case 2:
			{
				colorSet = "Yellow";
				break;
			}
			case 3:
			{
				colorSet = "Green";
				break;
			}
			case 4:
			{
				colorSet = "Blue";
				break;
			}
			case 5:
			{
				colorSet = "Black";
				break;
			}
		}

		if (colorSet != "Black")
		{
			for (int value = 0; value < 12; value++)
			{
				switch (value)
				{
					case 0:
					{
						actionSet = "None";
						cardDeck.push_back(Card(colorSet, value, actionSet));
						break;
					}
					case 10:
					{
						actionSet = "Reverse";
						cardDeck.push_back(Card(colorSet, value, actionSet));
						break;
					}
					case 11:
					{
						actionSet = "Draw Two";
						cardDeck.push_back(Card(colorSet, value, actionSet));
						break;
					}
					case 12:
					{
						actionSet = "Skip";
						cardDeck.push_back(Card(colorSet, value, actionSet));
						break;
					}
					default:
					{
						actionSet = "None";
						cardDeck.push_back(Card(colorSet, value, actionSet));
						break;
					}
				}
			}
		}
			
		
	}
}


Deck::~Deck()
{
}