#include <iostream> //Basic input/output
#include <cstdlib> //C standard library for random numbers
#include <ctime> //Allow for different random numbers instead of pseudo random
using namespace std;

int RandomNumGenerator(){
    
    srand (time(0)); //Unique seed
    int random_number1;
    int random_number2;
    
   random_number1 = ((rand() % 100) + 1); //This will pick a random number between 1 and 100
   random_number2 = ((rand() % 100) + 1); //This will pick a differnet random number between 1 and 100
   cout << "A random number between 1 and 100 " << random_number1 << endl; //Output statement
   cout << "Another random number between 1 and 100 " << random_number2 << endl;  //Output statement
   
return 0; 
    
}

int main () {
    
    RandomNumGenerator();
   return 0;
    
    
}
/*Running /home/ubuntu/workspace/lab22/lab22.cpp
A random number between 1 and 100 96
Another random number between 1 and 100 15


Process exited with code: 0

Running /home/ubuntu/workspace/lab22/lab22.cpp
A random number between 1 and 100 95
Another random number between 1 and 100 62


Process exited with code: 0


*/