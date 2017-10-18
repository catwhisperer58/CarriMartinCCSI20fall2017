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

    
        random_number = ((rand() % 50) + 1); //This will have the computer choose a random number between 1 and 50
        cout<<"Random number between 1 and 50: "<<endl;
    
        cout<<"Pick a number between 1 and 50: ";
        cin>>user_num;
    

    
    while (random_number > 0); (random_number <= 50); {
}
        
        for (user_num = 0; 1 <= user_num <= 50; ++user_num);
        

        if (user_num < random_number) {
           cout<<"Too Low, guess again using a new number between "<<user_num<<" and  50";
           cin>>user_num;
}
        else if (user_num > random_number) {
            cout<<"Too High, guess again using a new number between 0 and "<<user_num;
            cin>>user_num;
}
        else { user_num == random_number;
            cout<<"Just right!"<<endl;
            
            return 0;
}
}

        


    
    



    

    

