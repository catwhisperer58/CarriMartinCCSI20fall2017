#include <iostream>
#include <cstdlib> //C standard library for random numbers
using namespace std;

int main () {
    int random_number1 = 0;
    int random_number2 = 0;
    
    random_number1 = 3;
    random_number2 = 11;
    srand(random_number1);
    srand(random_number2); 
    
   random_number1 = ((rand() % 100) + 1); //This will pick a random number between 1 and 100
   random_number2 = ((rand() % 100) + 1); //This will pick a differnet random number between 1 and 100
   cout << "A pseudo-random number between 1 and 100 " << random_number1 << endl; //While random, now the code will pick the same number, so,
   cout << "Another pseudo-random number between 1 and 100 " << random_number2 << endl; //it's really pseudo-random
   
   
   return 0;
}
/*Running /home/ubuntu/workspace/lab22/lab22.cpp
A pseudo-random number between 1 and 100 24
Another pseudo-random number between 1 and 100 95
*/