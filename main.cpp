#include <iostream>
#include "poker_types.h"
#include "card.h"
#include "deck.h"
#include "player.h"
#include "hands.h"
#include <string>

using namespace std;

int main(int argc, char* argv[]) { 

    Deck deck;
    for (int i = 0; i < 1000; i++) {
        deck.Shuffle();
    }
    deck.Display();
    cout << endl << "Size: " << deck.Count() << endl;
    list<Player> players;
    for (int i = 0; i < 9; i++) {
        Player player;
        players.push_back(player);
    }
    cout << "Simulate dealing" << endl;
    for (int i = 0; i < 2; i++) {
        for (auto it = players.begin(); it != players.end(); ++it) {
            (*it).GiveCard(deck.TakeCard());    
        }
    }
    cout << "Players:" << players.size() << endl;
    for (auto it = players.begin(); it != players.end(); ++it) {
        (*it).Display();
        cout << endl;
    }
    cout << deck.Count() << endl;
    deck.Sort();
    deck.Display();
    
    Card card6(Ace, Clubs);
    Card card7(Ace, Diamonds);
    Card card8(Two, Hearts);
    Card card9(Two, Spades);
    Card card10(Two, Clubs);

    list<Card> testCards;

    testCards.push_back(card6);
    testCards.push_back(card7);
    testCards.push_back(card8);
    testCards.push_back(card9);
    testCards.push_back(card10);
    
    cout << "Cards: " << endl;
    
    for (auto card = testCards.begin(); card != testCards.end(); ++card) {
        card->Display();
    }

    cout << "HandEval: " << endl;

    cout << "HandNames[0] = " << Hands::Hand::HandNames[0] << endl;
    
    for (int i = 8; i >= 0; --i) { 
        Hands::Hand *tmpHand = Hands::GetHandFactory(Hands::Hand::HandNames[i], testCards);
        if (tmpHand == NULL) {
            cout << "Factory returned null: " << Hands::Hand::HandNames[i] << endl;
            continue;
        }
        cout << Hands::Hand::HandNames[i] << ": " << (tmpHand->HasHand() ? "yes" : "no") << endl;
    }
}
