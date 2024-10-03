#ifndef Cards_h
#define Cards_h
#include <vector>
#include <string>


const std::string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
const std::string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };



/*
enum class Suit
{
	Spades, // Pique
	Hearts, // Coeur
	Diamonds, // Carreau
	Clubs // Trefle 
};

enum class Rank
{
	Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
		Jack, Queen, King, Ace
};*/

class Card
{
	std::string rank_;
	std::string suit_;

public:
	std::string Display();

	Card(std::string rank, std::string suit);
};

#endif // !Cards_h

