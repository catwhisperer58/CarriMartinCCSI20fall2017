#include <iostream> //Standard input/output library
#include <ctime> //This header to manipulate date and time
#include <cstdlib> //Standard library for several general purpose functions, inclding random number generation
using namespace std;

const double kilos_to_pounds = 0.45359; //These are my constants, they don't change, .45 pounds per kilo
const double pounds_to_kilos = 2.2046; //2.2046 kilos per pound

/*This function will accept two values, swap them, and then returns a random number
between them. Then, the next two functions will convert pounds to kilos, and visa versa, using the 
ramdom number from the first function
*/
int RandomNumGenerator(int user_num1, int user_num2);//Two values to be entered
double PoundsToKilos(double pounds_num); //Converts pounds into kilos
double KilosToPounds(double kilos_num); //Converts kilos into pounds


int main () {

    int user_num1; //First user input number
    int user_num2; //Second user input number
    int random_num; //Declares my variable in main 
   
    


    
    
    cout<<"Pick a number between 1 and 500: "; //Directive to user
    cin>>user_num1;//User input
    cout<<"Pick another number between 1 and 500, but greater than your first pick: "; //Directive to user
    cin>>user_num2; //User input
    cout<<user_num1<<", "<<user_num2<<endl; //Original user input numbers
    cout<<user_num2<<", "<<user_num1<<endl; //Numbers swapped
    cout<<"Random number between the two user input numbers: "; //Random number between two user input numbers
    
    random_num = RandomNumGenerator(user_num1, user_num2); //Assigns my random number 
    
    cout<<RandomNumGenerator(user_num1, user_num2)<<endl; //Calls the function to create the random number
    
    cout<<random_num<<" pounds is "<<PoundsToKilos(random_num)<<" kilos"<<endl; //Inserts that same random number into number of pounds
                                                                                //and then calls the function to convert that number 
                                                                                //of pounds into kilos
    
    cout<<random_num<<" kilos is "<<KilosToPounds(random_num)<<" pounds."<<endl; //Inserts the same random number into number of kilos
                                                                                 //and then calls the function to convert that number of
                                                                                 //kilos into pounds
    

    return 0;
    
}    
    
/*My first function, which is required to get two numbers from the user, and then generate a random number between the 
two chosen numbers.
*/

int RandomNumGenerator(int value_num1, int value_num2){
    
    int random_num;
    srand(time(0)); //Unique seed, allows for constantly different random number

    random_num = rand() % (value_num2 - value_num1) + value_num1;
    
 return random_num; 
} 

/*This function will use that generated random number to convert how many kilos are in that random number of pounds
*/

double PoundsToKilos(double pounds_num){ //States what I'm looking for and defines my parameter
      double total_kilos; //Declares my variable 
   
    total_kilos = pounds_num  * pounds_to_kilos; //Declares what my function should do....convert pounds into kilos
    
    return total_kilos; //Specifies what I want this function to put out
}

/*This function will use that generated random number to convert how many pounds are in that random number of kilos
*/

double KilosToPounds (double kilos_num){//States that I'm looking to convert kilos into pounds and assigns my parameters
   double total_pounds; //Deaclares my variable
    
    total_pounds = kilos_num * kilos_to_pounds; //Declares what my funtion should do...convert kilos into pounds
    
    return total_pounds; //Specifies what I want this function to put out, or return
}

/*Running /home/ubuntu/workspace/lab24/lab24.cpp
Pick a number between 1 and 500: 25
Pick another number between 1 and 500, but greater than your first pick: 398
25, 398
398, 25
Random number between the two user input numbers: 135
135 pounds is 297.621 kilos
135 kilos is 61.2347 pounds.

Running /home/ubuntu/workspace/lab24/lab24.cpp
Pick a number between 1 and 500: 21
Pick another number between 1 and 500, but greater than your first pick: 58
21, 58
58, 21
Random number between the two user input numbers: 28
28 pounds is 61.7288 kilos
28 kilos is 12.7005 pounds.

Running /home/ubuntu/workspace/lab24/lab24.cpp
Pick a number between 1 and 500: 201
Pick another number between 1 and 500, but greater than your first pick: 468
201, 468
468, 201
Random number between the two user input numbers: 314
314 pounds is 692.244 kilos
314 kilos is 142.427 pounds.

*/
   
    
    
    
    
    
    
