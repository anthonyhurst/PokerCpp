build: main.cpp card.cpp deck.cpp player.cpp
	g++ main.cpp card.cpp deck.cpp player.cpp hand_value.cpp -std=c++0x -o Poker 
