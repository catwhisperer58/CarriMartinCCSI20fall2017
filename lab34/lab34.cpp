#include <iostream> 
using namespace std;

/* This program reads in a letter and reports whether
 it is an uppercase letter, a lowercase letter, or neither.
 it should continue reading in values until the user enters a -1
*/
 
int main() {  //Main function
        
        char letters = 'a'; // Variable in main
        cout << "Please enter a character, or enter -1 to quit: "; //Intended output
        cin  >> letters; //user input
         


       while (letters >= 'A') {  // check -- is it a letter??
       
         if (letters >= 'A') || (letters <= 'Z') {
               cout << "Yes, that is a uppercase letter." <<endl;
            }
        }
        if (letters >= 'a') {
          else if (letters >= 'a') {
            if (letters <= 'z') {
               cout << "Yes, that is a lowercase letter"<<endl;
            }
        }  
        else if (letters > 'z') { 
            if (letters > 'Z') {
            cout << "Not a letter"<<endl;
        }
        }
        else {  letters == -1;
            cout<<"Done, goodbye!"<<endl;
        }
        
          return 0; 
       }
       }
}