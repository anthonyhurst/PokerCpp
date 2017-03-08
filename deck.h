#include <iostream>
#include <list>
#include "poker_types.h"

#ifndef DECK_H
#define DECK_H
class Deck {
public:
    Deck();
    void Display();
private:
    std::list<Card> cards_;
};
#endif
