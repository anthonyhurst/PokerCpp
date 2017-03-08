#include <iostream>
#include "poker_types.h"

#ifndef CARD_H
#define CARD_H
class Card {
public:
    Card(CardRank cardRank, CardClass cardClass);
    Card();
    void Display();
    char GetCardRank();
    char GetCardClass();
private:
    CardClass card_class_;
    CardRank card_rank_;
};
#endif
