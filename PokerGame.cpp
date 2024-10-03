#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Cards.h"
#include "Deck.h"

int main()
{
	srand(time(0));

	Deck deck;

	deck.Fill();

	deck.Shuffle();

	deck.PrintDeck();
}
