#include <iostream>
#include <ctime> //Gives random time
#include <cstdlib>//standard c++ library
using namespace std;

/*This function will accept two values of the user's choice, swap them, and then generate a random number between integers that are 
input by the user 
*/
int RandomNumGenerator(int small_num, int large_num){
    
    small_num; //This will be the smallest number
    large_num; //This will be the largest number
    int random_num; //This will be a random number
    srand(time(0));//Unique seed
    
    
   cout<<"Enter a number: "; //Asking user for a number
   cin>> small_num; //User inputs a number
   cout<<"Enter a number larger than the first number: "; //Asking user for a new, larger number
   cin>>large_num; //User inputs second, larger number

   cout<<small_num<<", "<<large_num<<endl; //Program outputs chosen numbers
   cout<<large_num<<", "<<small_num<<endl; //Program swaps numbers

   random_num = ((rand() % large_num) + 1); //This will pick a random number between whatever two numbers user chooses, after the function swaps them 
                                             
   cout<<"A random number between "<<large_num<<" and "<<small_num<<" is "<<random_num<<endl; //Now the program will pick a random number between the two chosen numbers, larger being first
 
return 0;
                                             
}

/*This function will accept two random values, swap them, and then swap them back
*/
int SwapFunction(){
    
    int swap_num_a;//random number
    int swap_num_b;//second random number
    int random_num;//ended up not needing this, but left it in
    srand (time (0)); //unique seed
    
   
   
    swap_num_a = ((rand() % 100) + 1); //This will pick a random number between 1 and 100
    swap_num_b = ((rand() % 50) + 1); //This will pick a second random number between 1 and 50
    
    cout<<"Enter a random number "<<swap_num_a<<endl; //Computer input random number
    cout<<"Enter another random number "<<swap_num_b<<endl; //Computer input random number
                                             
    cout<<swap_num_a<<", "<<swap_num_b<<endl; //Outputs random numbers
    cout<<swap_num_b<<", "<<swap_num_a<<endl; //Then swaps the numbers 
    cout<<swap_num_a<<", "<<swap_num_b<<endl; //Then swaps them back
    
return 0;
    
}

int main (){
    
    int small_num = 0; 
    int large_num = 0;
    int swap_num_a = 0;
    int swap_num_b = 0;
    
    RandomNumGenerator(1, 10);//argument
    cout<<endl;
    SwapFunction(); //Empty value
      
      
return 0;

    
}

/*Running /home/ubuntu/workspace/lab23/lab23.cpp
Enter a number: 1
Enter a number larger than the first number: 10
1, 10
10, 1
A random number between 10 and 1 is 2

Enter a random number 77
Enter another random number 20
77, 20
20, 77
77, 20


Process exited with code: 0

Running /home/ubuntu/workspace/lab23/lab23.cpp
Enter a number: 5
Enter a number larger than the first number: 82
5, 82
82, 5
A random number between 82 and 5 is 31

Enter a random number 36
Enter another random number 34
36, 34
34, 36
36, 34


Process exited with code: 0

Running /home/ubuntu/workspace/lab23/lab23.cpp
Enter a number: 22
Enter a number larger than the first number: 73
22, 73
73, 22
A random number between 73 and 22 is 22

Enter a random number 71
Enter another random number 36
71, 36
36, 71
71, 36


Process exited with code: 0

*/





