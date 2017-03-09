#include <iostream>
#include "player.h"
#include "card.h"

using namespace std;

Player::Player() {

}

void Player::Display() {
    for (auto it = cards_.begin(); it != cards_.end(); ++it) {
        it->Display();
    }
}


void Player::GiveCard(Card card) {
    cards_.push_back(card);
}
