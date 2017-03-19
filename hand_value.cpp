#include <iostream>
#include <list>
#include "poker_types.h"
#include "card.h"
#include "hand_value.h"

using namespace std;

HandValue::HandValue(list<Card> cards) {
    cards_ = cards;
}


void HandValue::CalculateValue() {
    // to be implemented
}

HandType HandValue::GetHandType() const {
    return hand_type_;
}

const int* HandValue::GetSubValue() const {
    return sub_value_;
}

const int* HandValue::GetKickerValue() const {
    return kicker_value_;
}

bool HandValue::operator==(const HandValue& handValue) {
    if (hand_type_ != handValue.GetHandType())
        return false;
    const int* otherSubValue = handValue.GetSubValue();
    for (int i = 0; i < SUBVALUESIZE; ++i) {
        if (sub_value_[i] != otherSubValue[i])
            return false;
    }
    const int* kickerValue = handValue.GetKickerValue();
    for (int i = 0; i < SUBVALUESIZE; ++i) {
        if (kicker_value_[i] != kickerValue[i])
            return false;
    }
    return true;
}

bool HandValue::operator!=(const HandValue& handValue) {
    return !(*this == handValue);
}

bool HandValue::operator<(const HandValue& handValue) {
    // to be implemented
}

bool HandValue::operator>(const HandValue& handValue) {
    return !(*this == handValue && *this < handValue);
}

bool HandValue::operator<=(const HandValue& handValue) {
    return (*this < handValue || *this == handValue);
}

bool HandValue::operator>=(const HandValue& handValue) {
    return (*this > handValue || *this == handValue);
}

