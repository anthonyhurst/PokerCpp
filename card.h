#include <iostream>
#include "poker_types.h"

#ifndef CARD_H
#define CARD_H
class Card {
public:
    Card(Rank rank, Suit suit);
    Card();
    void Display();
    char GetCardRank();
    char GetCardSuit();
private:
    Suit suit_;
    Rank rank_;
};
#endif
