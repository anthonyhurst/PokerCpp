#include <iostream>
#include "poker_types.h"
#include "card.h"
#include "deck.h"
#include "player.h"

using namespace std;

int main(int argc, char* argv[]) { 
    Deck *deck = new Deck();;
    for (int i = 0; i < 1000; i++) {
        deck->Shuffle();
    }
    deck->Display();
    cout << endl << "Size: " << deck->Count() << endl;
    list<Player*> players;
    for (int i = 0; i < 9; i++) {
        Player* player = new Player();
        players.push_back(player);
    }
    cout << "Simulate dealing" << endl;
    for (int i = 0; i < 2; i++) {
        for (auto it = players.begin(); it != players.end(); ++it) {
            (*it)->GiveCard(deck->TakeCard());    
        }
    }
    cout << "Players:" << players.size() << endl;
    for (auto it = players.begin(); it != players.end(); ++it) {
        (*it)->Display();
        cout << endl;
    }
    cout << deck->Count() << endl;
}
