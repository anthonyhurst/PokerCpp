#include <iostream>
#include <list>
#include "poker_types.h"
#include "card.h"

#ifndef PLAYER_H
#define PLAYER_H
class Player {
public:
    Player();
    void Display();
    void GiveCard(Card card);
private:
    std::list<Card> cards_;
};
#endif
