#include <iostream>
#include "poker_types.h"
#include "card.h"
#include "deck.h"

using namespace std;

Deck::Deck() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 1; j < 14; ++j) {
            cards_.push_back(Card(static_cast<CardRank>(j), static_cast<CardClass>(i)));
        }
    }
}

void Deck::Display() {
    for (auto it = cards_.begin(); it != cards_.end(); ++it) {
        it->Display();
    }
}
