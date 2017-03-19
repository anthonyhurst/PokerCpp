#include <iostream>
#include <list>
#include "poker_types.h"

#ifndef DECK_H
#define DECK_H
class Deck {
public:
    Deck();
    void Display();
    Card TakeCard();
    int Count();
    void Shuffle();
    void Sort();
private:
    std::list<Card> cards_;
};
#endif
