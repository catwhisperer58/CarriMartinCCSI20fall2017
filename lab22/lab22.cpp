#include <iostream>
#include <cstdlib> //C standard library for random numbers
#include <ctime>
using namespace std;

int main () {
    srand (time(0)); //Unique seed
    int random_number1 = 0;
    int random_number2 = 0;
    
    
   random_number1 = ((rand() % 100) + 1); //This will pick a random number between 1 and 100
   random_number2 = ((rand() % 100) + 1); //This will pick a differnet random number between 1 and 100
   cout << "A random number between 1 and 100 " << random_number1 << endl; //Output statement
   cout << "Another random number between 1 and 100 " << random_number2 << endl;  //Output statement
   
   return 0;
}
/*Running /home/ubuntu/workspace/lab22/lab22.cpp
A random number between 1 and 100 31
Another random number between 1 and 100 32

Running /home/ubuntu/workspace/lab22/lab22.cpp
A random number between 1 and 100 32
Another random number between 1 and 100 59

Running /home/ubuntu/workspace/lab22/lab22.cpp
A random number between 1 and 100 32
Another random number between 1 and 100 59


*/