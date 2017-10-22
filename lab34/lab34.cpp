#include <iostream> 
using namespace std;

/*This program was corrected by Carri Martin
on 10-21-2017
This program reads in a letter and reports whether
 it is an uppercase letter, a lowercase letter, or neither.
 it should continue reading in values until the user enters a 0
*/
 
int main() {  //Main function
        
        signed char ch; // Variable in main
        cout << "Please enter a character, or enter 0 to quit: "; //Intended output
        cin  >> ch; //user input
         
         
    
        while (ch != '0') //This will execute a repeating loop as long as the user doesn't input a 0 
        {
          if ((ch >= 'A') && (ch <= 'Z')) { // check -- is it an uppercase letter??
          
               cout << "Yes, that is a uppercase letter, enter another character, or to quit, use 0: ";
               cin>>ch;
          }
    
          else if ((ch >= 'a') && (ch <= 'z')) { //Check if it's a lower case letter
          
               cout << "Yes, that is a lowercase letter, enter another character, or to quit, use 0: ";
               cin>>ch;
          }
         
          else  { //All non-letter charater input
             
            cout << "Not a letter, enter another character, or to quit, use 0: ";
            cin>>ch;
        }     
        }
        
          return 0; //Return of 0
    }

    /*Running /home/ubuntu/workspace/lab34/lab34.cpp
Please enter a character, or enter 0 to quit: F
Yes, that is a uppercase letter, enter another character, or to quit, use 0: f
Yes, that is a lowercase letter, enter another character, or to quit, use 0: Z
Yes, that is a uppercase letter, enter another character, or to quit, use 0: 3
Not a letter, enter another character, or to quit, use 0: 0
*/
      