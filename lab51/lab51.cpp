#include <iostream> 
//#include <iostream>: ahould be only one <iostream> 
#include <cstring> 
using namespace std;

/*Needs a header...name, date, title
*/

int main() {
   
    char nameLength[10]; //Declaration of variable .....changed, needed to be same data type
    char* name = nullptr; //Declaration of pointer
    
    name = &nameLength; //Assigning address of nameLength

    cout << "Please enter a 10 letter word or less" << endl; //Prompt for input
    cin >> name; //calling the input

    char* head  = name;
    char* tail = name;
    nameLength = strlen(*name);

    cout << "Your word is " << name << endl;
    
    while (*head != '\0')
         {

    if (nameLength<10) //if and while were reversed
    {
         
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;
     
      while (tail != name)
          {

     tail = &name[strlen(name) - 1];

     if (nameLength < 10)
     {
          
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}