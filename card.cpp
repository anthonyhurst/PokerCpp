#include <iostream>
#include "poker_types.h"
#include "card.h"

using namespace std;

Card::Card(CardRank cardRank, CardClass cardClass) {
    card_rank_ = cardRank;
    card_class_ = cardClass;
}

Card::Card() {

}

void Card::Display() {
    cout << GetCardRank() << GetCardClass() << endl;
}


char Card::GetCardRank() {
    switch(card_rank_) {
        case 1:
            return 'A';
            break;
        case 2:
            return '2';
            break;
        case 3:
            return '3';
            break;
        case 4:
            return '4';
            break;
        case 5:
            return '5';
            break;
        case 6:
            return '6';
            break;
        case 7:
            return '7';
            break;
        case 8:
            return '8';
            break;
        case 9:
            return '9';
            break;
        case 10:
            return 'T';
            break;
        case 11:
            return 'J';
            break;
        case 12:
            return 'Q';
            break;
        case 13:
            return 'K';
            break;

    }
}

char Card::GetCardClass() {
    switch(card_class_) {
        case 0:
            return 'C';
            break;
        case 1:
            return 'D';
            break;
        case 2:
            return 'H';
            break;
        case 3:
            return 'S';
            break;
    }
}
