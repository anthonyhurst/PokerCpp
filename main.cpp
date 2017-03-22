#include <iostream>
#include "poker_types.h"
#include "card.h"
#include "deck.h"
#include "player.h"
#include "hands.h"

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
    
    Card card1(Ace, Clubs);
    Card card2(King, Clubs);
    cout << "Ace > King? " << (card1 > card2) << endl;
    Card card3(Queen, Clubs);
    Card card4(Ten, Clubs);
    Card card5(Jack, Spades);
    list<Card> testCards;
    testCards.push_back(card1);
    testCards.push_back(card2);
    testCards.push_back(card3);
    testCards.push_back(card4);
    testCards.push_back(card5);

    Hands::Flush hand (testCards);;// flush (testCards);
    cout << "HasHand: " << hand.HasHand() << endl;

    Hands::Straight hand2 (testCards);;// flush (testCards);
    cout << "HasHand: " << hand2.HasHand() << endl;

    Hands::StraightFlush hand3 (testCards);;// flush (testCards);
    cout << "HasHand: " << hand3.HasHand() << endl;
    
}
