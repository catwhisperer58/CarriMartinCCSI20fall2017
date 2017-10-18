#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*Written by Carri Martin
on 10-17-2017
This will be a guessing game, having the player try to guess a number between 1 and 50, that is randomly 
chosen by the computer.
*/

int main() {
    
    srand (time(0)); //Unique random number generator
    int random_number;
    int user_num;
    int num_guesses;
    
    user_num = 0;
    random_number = 0;
    num_guesses = 0;
    
     while (random_number != user_num) {
              for (num_guesses = 0; num_guesses <= 10; ++num_guesses);
}
    

        random_number = ((rand() % 50) + 1); //This will have the computer choose a random number between 1 and 50
        cout<<"Random number between 1 and 50: "<<random_number<<endl;
        
        cout<<"Pick a number between 1 and 50: ";
        cin>>user_num;
        

    
        if (user_num < random_number ) {
           cout<<"Too Low, guess again using a new number between "<<user_num<<" and  50"<<endl;
           cin>>user_num;
           
}
        else if (user_num > random_number) {
            cout<<"Too High, guess again using a new number between 0 and "<<user_num<<endl;
            cin>>user_num;
            
}
        else if (user_num == random_number) {
            cout<<"Just right!"<<endl;
}
         
            
        else { (user_num < 1) || (user_num > 50);
            cout<<"Pick again, invalid entry, it's suppose to be between 1 and 50!"<<endl;
            cin>>user_num; 
}

            
            return 0;
}



        


    
    



    

    

