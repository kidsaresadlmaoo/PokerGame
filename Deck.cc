#include <iostream>
#include "Deck.h"
#include "Cards.h"
#include <algorithm>
#include <random>
#include <vector>


void Deck::Fill()
{
	for (int ranksDeck = 0; ranksDeck < 13; ranksDeck++)
	{
		for (int suitsDeck = 0; suitsDeck < 4; suitsDeck++)
		{
			cards.emplace_back(ranks[ranksDeck], suits[suitsDeck]);
		}
	}
}

void Deck::Shuffle()
{
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(cards.begin(), cards.end(), g);
}

void Deck::PrintDeck()
{
	for (auto& card : cards)
	{
		std::cout << card.Display() << std::endl;
	}
}
//Card Deck::PickACard()
//{
//	int rankIndex = /*rand() %*/ 0;
//	int suitIndex = /*rand() % 4 */ 0;
//
//	Card myCard(ranks[rankIndex], suits[suitIndex]);
//
//	std::cout << "You drew: " << myCard.Display() << std::endl;
//}