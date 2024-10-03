#ifndef Deck_h
#define Deck_h
#include <vector>
#include "Cards.h"
#include <iostream>


class Deck
{
private:
	std::vector<Card> cards;

public:
	void Fill();
	void Shuffle();
	void PrintDeck();
	Card PickACard();
};

#endif // !Deck_h