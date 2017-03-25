#include <string>

#ifndef POKER_TYPES_H
#define POKER_TYPES_H

enum Rank {
    Ace = 1,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
};

enum Suit {
    Clubs,
    Diamonds,
    Hearts,
    Spades,
};

enum HandType {
    HighCard = 1,
    Pair,
    TwoPair,
    ThreeOfAKind,
    Straight,
    Flush,
    FullHouse,
    FourOfAKind,
    StraightFlush
};

#endif
