#include "Cards.h"

std::string Card::Display()
{
	return  rank_ + " of " + suit_;
}

Card::Card(std::string rank, std::string suit)
{
	rank_ = rank;
	suit_ = suit;
}