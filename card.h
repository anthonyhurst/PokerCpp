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
    int GetCardRankValue() const;
    int GetCardSuitValue() const;
    bool operator==(const Card& card);
    bool operator!=(const Card& card);
    bool operator<(const Card& card);
    bool operator>(const Card& card);
    bool operator<=(const Card& card);
    bool operator>=(const Card& card);
private:
    Suit suit_;
    Rank rank_;
};
#endif
