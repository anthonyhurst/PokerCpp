#include <iostream>
#include <list>
#include "card.h"
#include "player.h"

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
