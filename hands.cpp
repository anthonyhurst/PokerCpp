#include <iostream>
#include <list>
#include "poker_types.h"
#include "card.h"
#include "hands.h" 

using namespace std;

namespace Hands {

    bool StraightFlush::HasHand() {
        Flush flush (cards_);
        Straight straight (cards_);
        return flush.HasHand() && straight.HasHand();
    }

    bool FourOfAKind::HasHand() {
        return false;
    }

    bool FullHouse::HasHand() {
        return false;
    }

    bool Flush::HasHand() {
        Card firstCard;
        bool first = true;
        for(auto card = cards_.begin(); card != cards_.end(); ++card) {
            if (first) {
                firstCard = *card;
                first = false;
                continue;
            }
            if (firstCard.GetCardSuitValue() != (*card).GetCardSuitValue())
                return false; 
        }
        return true;  
    }

    bool Straight::HasHand() {
        cards_.sort();
        Card realFirst = cards_.front();
        cards_.pop_front();
        Card firstCard, lastCard;
        bool first = true;
        for (auto card = cards_.begin(); card != cards_.end(); ++card) {
            if (first) {
                lastCard = *card;
                firstCard = *card;
                first = false;
                continue;
            }
            if (lastCard.GetCardRankValue() + 1 != (*card).GetCardRankValue()) {
                cards_.push_front(realFirst);
                return false;
            }
            lastCard = *card;
        }
        cards_.push_front(realFirst);
        if (realFirst.GetCardRankValue() == 1)
            if (lastCard.GetCardRankValue() == 12 || firstCard.GetCardRankValue() == 2)
                return true;
        else if (realFirst.GetCardRankValue() + 1 == firstCard.GetCardRankValue())
            return true;
        return false;
    }

    bool ThreeOfAKind::HasHand() {
        return false;
    }

    bool TwoPair::HasHand() {
        return false;
    }

    bool Pair::HasHand() {
        return false;
    }
}
