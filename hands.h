#include <iostream>
#include <list>
#include "poker_types.h"
#include "card.h"

#ifndef HANDS_H
#define HANDS_H

class Hand {
protected:
    std::list<Card> cards_;
public:
    Hand(std::list<Card> cards) { cards_ = cards; };
    virtual bool HasHand() = 0;
};

class StraightFlush : Hand {
public:
    StraightFlush(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

#endif
