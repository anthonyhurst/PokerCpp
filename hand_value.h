#include <iostream>
#include <list>
#include "poker_types.h"
#include "card.h"

#ifndef HAND_VALUE_H
#define HAND_VALUE_H

#define SUBVALUESIZE 5
class HandValue {
private:
    // this represents the hand classification.
    HandType hand_type_; 
    // this represents a meaningful value with
    // respect to the hand type.  E.g. a Straight
    // SubValue would be its highest card in the
    // Straight.  
    int sub_value_[SUBVALUESIZE];
    // this represents the card values that have
    // nothing to do with the hand classification.
    int kicker_value_[SUBVALUESIZE];
    std::list<Card> cards_;
public:
    HandValue(std::list<Card> cards);
    void CalculateValue();
    HandType GetHandType() const;
    const int* GetSubValue() const;
    const int* GetKickerValue() const;
    bool operator==(const HandValue& handValue); // needs impl
    bool operator!=(const HandValue& handValue);
    bool operator<(const HandValue& handValue); // needs impl
    bool operator>(const HandValue& handValue);
    bool operator<=(const HandValue& handValue);
    bool operator>=(const HandValue& handValue);
};
#endif
