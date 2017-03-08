#include <iostream>
#include <cstdlib>
#include <ctime>
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

void Deck::Shuffle() {
    srand(time(NULL));
    for (auto it = cards_.begin(); it != cards_.end(); ++it) {
        int randomInt = rand() % 52;
        int i = 0;
        for (auto iit = cards_.begin(); iit != cards_.end(); ++iit) {
            if (i == randomInt) {
                Card tmp;
                tmp = *it;
                *it = *iit;
                *iit = tmp; 
            } 
            i++;
        }
    }
}

Card Deck::TakeCard() {
    Card topCard = cards_.back();
    cards_.pop_back();
    return topCard;
}

int Deck::Count() {
    return cards_.size();
}

void Deck::Display() {
    for (auto it = cards_.begin(); it != cards_.end(); ++it) {
        it->Display();
    }
}
