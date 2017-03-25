#include <iostream>
#include <list>
#include "poker_types.h"
#include "card.h"
#include <string>

#ifndef HANDS_H
#define HANDS_H


namespace Hands {
    

    class Hand {
    protected:
        std::list<Card> cards_;
    public:
        Hand(std::list<Card> cards) { cards_ = cards; };
        virtual bool HasHand() = 0;
        const static std::string HandNames[9];
    };

    class StraightFlush: public Hand {
    public:
        StraightFlush(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class FourOfAKind: public Hand {
    public:
        FourOfAKind(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class FullHouse: public Hand {
    public:
        FullHouse(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class Flush: public Hand {
    public:
        Flush(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class Straight: public Hand {
    public:
        Straight(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class ThreeOfAKind: public Hand {
    public:
        ThreeOfAKind(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class TwoPair: public Hand {
    public:
        TwoPair(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class Pair: public Hand {
    public:
        Pair(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    class HighCard: public Hand {
    public:
        HighCard(std::list<Card> cards) : Hand(cards) { };
        bool HasHand(); 
    };

    Hand *GetHandFactory(std::string handName, std::list<Card> cards);

}

#endif
