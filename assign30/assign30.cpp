#include<iostream>
using namespace std;

/*Created by Carri Martin
 *Created on 10-30-2017
 This is Assignment 3.0, The Pig Game
 */
 //Pig Gakme class definition
 //This is a game where player/computer get to roll the dice for points. Player can choose to end their turn
 //  or it ends when they roll a 1. You get to add up points if you end your turn before rolling a 1. Rolling a 1 gets you 0.
 
 class PigGame {
     public:
     
     void PlayerRoll(int roll_the_dice);
     void ComputerRoll(int roll_the_dice);
     
     void print();
 }