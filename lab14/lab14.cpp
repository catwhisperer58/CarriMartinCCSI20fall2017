#include <iostream>
using namespace std;

/*Emulates CoinStar machine

Author: Carri Martin
Date: 9-5-2017
*/

int main () {
    
    int numPennies  = 0; //Number of pennies put into the machine//
    int numNickels  = 0; //Number of nickels put into the machine//
    int numDimes    = 0; //Number of dimes put into the machine//
    int numQuarters = 0; //Number of quarters put into the machine//
    int centsIn     = 0; //Amount of money put into the machine in cents (an integer)//
    
    double dollarsIn   = 0; //Amount of money put into the machine in dollars (with decimal)//
    double moneyEarned = 0; //Amount of money that I leave with//
    double x           = 0; //The amount of the transaction fee//
    
    cout << "Enter the amount of money, in cents, put into the machine: "; //$2.35 would be 235//
    cin >> centsIn;
    
       numQuarters = centsIn / 25;
       numDimes    = (centsIn%25) / 10;
       numNickels  = (centsIn%10) / 5;
       numPennies  = centsIn%5;
    
    cout << "If you put " << centsIn << " into the CoinStar machine, that would be " << numQuarters << endl;
    cout << " quarters, " << numDimes << " dimes, " << numNickels << " nickels and " << numPennies << " pennies." << endl;
    
    cout << " Enter the amouht of money, in dollars: "; //Input using a decimal//
    cin >> dollarsIn;
    
       x           = dollarsIn * .109;
       moneyEarned = dollarsIn - x;
    
    cout << "Now when you deduct the transaction fee of 10.9% from the $" << dollarsIn << " that you placed " << endl;
    cout << "into the machine, and your total cash in hand will be $" << moneyEarned;
       
       
       
    
    
}

/*Running /home/ubuntu/workspace/lab14/lab14.cpp
Enter the amount of money, in cents, put into the machine: 105
If you put 105 into the CoinStar machine, that would be 4
 quarters, 0 dimes, 1 nickels and 0 pennies.
 Enter the amouht of money, in dollars: 1.05
Now when you deduct the transaction fee of 10.9% from the $1.05 that you placed 
into the machine, and your total cash in hand will be $0.93555

Running /home/ubuntu/workspace/lab14/lab14.cpp
Enter the amount of money, in cents, put into the machine: 3459
If you put 3459 into the CoinStar machine, that would be 138
 quarters, 0 dimes, 1 nickels and 4 pennies.
 Enter the amouht of money, in dollars: 34.59
Now when you deduct the transaction fee of 10.9% from the $34.59 that you placed 
into the machine, and your total cash in hand will be $30.8197

Running /home/ubuntu/workspace/lab14/lab14.cpp
Enter the amount of money, in cents, put into the machine: 987654321
If you put 987654321 into the CoinStar machine, that would be 39506172
 quarters, 2 dimes, 0 nickels and 1 pennies.
 Enter the amouht of money, in dollars: 9876543.21
Now when you deduct the transaction fee of 10.9% from the $9.87654e+06 that you placed 
into the machine, and your total cash in hand will be $8.8e+06

*/
       
    