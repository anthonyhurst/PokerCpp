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

class FourOfAKind : Hand {
public:
    FourOfAKind(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

class FullHouse : Hand {
public:
    FullHouse(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

class Flush : Hand {
public:
    Flush(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

class Straight : Hand {
public:
    Straight(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

class ThreeOfAKind : Hand {
public:
    ThreeOfAKind(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

class TwoPair : Hand {
public:
    TwoPair(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

class Pair : Hand {
public:
    Pair(std::list<Card> cards) : Hand(cards) { };
    bool HasHand(); 
};

#endif
