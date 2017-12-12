#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

/*This program is written by Carri Martin
Date: 11-21-2017
Assignment 4.0 Poker Hand Program
*/

//This program will play some hands of poker, which will be derived from a file.

int main() {
    
    const int NUM_ELEMENTS = 51;
    
    ifstream cardS;
    int deck_of_cards;
    char cards_suit[NUM_ELEMENTS];
    int card_num[NUM_ELEMENTS];
    int game_num;
    int num_players;
    int num_of_cards;
    int players_hand[NUM_ELEMENTS];
    int player_num[NUM_ELEMENTS];
    
     cards_suit[0] = 'H'; //Hearts
     cards_suit[1] = 'D'; //Diamonds
     cards_suit[2] = 'C'; //Clubs
     cards_suit[3] = 'S'; //Spades
    
    int i = 0;
    
   // Try to open file
   cout << "Opening file poker.txt" << endl;
   
   cardS.open("poker.txt");
   if (!cardS.is_open()) {
      cout << "Could not open file poker.txt." << endl;
      return 1; // 1 indicates error
}    
   cardS>>game_num;
   cardS>>num_players;
   
   cout<<game_num<<" "<<num_players<<endl;
   
   for (i = 0; i < num_of_cards; ++i) {
      
       num_of_cards = 5;
    cardS>>card_num[i];
    cardS>>cards_suit[i];
    
    cout<<card_num[i]<<" "<<cards_suit[i]<<" ";
    
   }


return 0;
}
   //First section done, I need to complete it
/*Running /home/ubuntu/workspace/assign40/assign40.cpp
Opening file poker.txt
1 4
6 C 5 H 6 S 8 C 12 C 

Process exited with code: 0
*/