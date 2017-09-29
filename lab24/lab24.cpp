#include <iostream> //Standard input/output library
#include <ctime> //This header to manipulate date and time
#include <cstdlib> //Standard library for several general purpose functions, inclding random number generation
using namespace std;

const double pounds_to_kilos = 0.45359; //These are my constants, they don't change
const double kilos_to_pounds = 2.2046;

/*This function will accept two values, swap them, and then returns a random number
between them. Then, the next two functions will convert pounds to kilos, and visa versa, using the 
ramdom number from the first function
*/
int RandomNumGenerator(int value_num1, int value_num2);//Two values to be entered
double PoundsToKilos(double total_pounds); //Converts pounds into kilos
double KilosToPounds(double total_kilos); //Converts kilos into pounds


int main () {
    int user_num1; //First user input number
    int user_num2; //Second user input number
    double user_pounds; //Pounds 
    double user_kilos; //Kilos
    double random_num = 0.0;
    
    cout<<"Pick a number between 1 and 500: "; //Directive to user
    cin>>user_num1;//User input
    cout<<"Pick another number between 1 and 500: "; //Directive to user
    cin>>user_num2; //User input
    cout<<user_num1<<", "<<user_num2<<endl; //Original user input numbers
    cout<<user_num2<<", "<<user_num1<<endl; //Numbers swapped
    cout<<"Random number between the two user input numbers: "; //Random number between two user input numbers
    
    cout<<RandomNumGenerator(user_num1, user_num2)<<endl; //Calls the function for random number
    
    cout<<"So, "<<random_num<<" pounds is "<<user_kilos<<" kilos, and "<<endl; //
    cout<<random_num<<" kilos is "<<user_pounds<<" pounds."<<endl;
    
    cout<<PoundsToKilos(user_pounds);
    cout<<KilosToPounds(user_kilos);
    
    
    
    return 0;
}
    
int RandomNumGenerator(int value_num1, int value_num2){
    srand(time(0)); //Unique seed, allows for constantly different random number
    int random_num;
    
    random_num = rand() % (value_num2 - value_num1) + 10;
    
    
 return random_num; 
}    
  
double PoundsToKilos(double total_pounds){
    int random_num;
    double user_pounds;
    double user_kilos;
    
    user_pounds = random_num;
    user_kilos = user_pounds * pounds_to_kilos;
    
    return user_kilos;
    
}

double KilosToPounds(double total_kilos){
    int random_num;
    double user_kilos;
    double user_pounds;
    
    user_kilos = random_num;
    user_pounds = user_kilos * kilos_to_pounds;
    
    return user_pounds;
}
    
    
    
    
    
    
    
    
    
