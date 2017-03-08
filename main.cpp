#include <iostream>
#include "poker_types.h"
#include "card.h"
#include "deck.h"

using namespace std;

int main(int argc, char* argv[]) { 
    Deck deck;
    for (int i = 0; i < 1000; i++) {
        deck.Shuffle();
    }
    deck.Display();
    cout << endl << "Size: " << deck.Count() << endl;
    for (int i = 0; i < 9; i++) {
        Card top = deck.TakeCard();
        top.Display();
        cout << endl;
    }
    cout << deck.Count() << endl;
}
