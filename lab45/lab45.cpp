#include<iostream>
#include<cstring>
using namespace std;

/*Written by Carri Martin
Date: November 9, 2017
Lab 4.5 Strings
*/

//This program will allow the user to create their own user name for my new website using strings
main() {
    
string user_first_name; //Constant compiler
string user_last_name;
user_first_name = "10";
user_last_name = "20";
int i = 0;

//Promt for user's name
cout<<"Enter your first name and then your last name: "<<endl; 
cin>>user_first_name>>user_last_name;
cout<<endl;

   // If statements to print name and give warnings of problems with the user's name  
       if ((user_first_name.size() <= [i]) && (user_last_name.size <= [i]))) {
         if (user_first_name != user_last_name) {
     --i;
}
         else if (user_first_name[i] == user_last_name[i]) { 
    cout<<"Warning, first and last name are the same."<<endl;
           cin>>user_first_name>>user_last_name;
}
     
} 
         else { ((user_first_name.size()) > [i]) || (user_last_name.size()) > [i]));
    cout<<"Your first name or your last name is larger than maximum size allowed."<<endl;
 
}   //Print the user's given name and then ask which three options for their username they would like
    cout<<"Name: "<<user_first_name<<" "<<user_last_name<<endl;
    cout<<"Which of the three user names would you like: "<<endl;
    cout<<endl;
   //For loop functions to display the three username options with their name  
   for (i = 0; user_first_name[i] != '\0', user_last_name[i] != '\0'; ++i) {
       user_first_name[i] = tolower(user_first_name[i]);
       user_last_name[i] = tolower(user_last_name[i]);
}
    cout<<user_first_name[0]<<user_first_name[1]<<user_last_name<<endl; //Prints username option 1
   
   for (i = 0; user_first_name[i] != '\0', user_last_name[i] != '\0'; ++i) {
       user_first_name[i] = tolower(user_first_name[i]);
       user_last_name[i] = toupper(user_last_name[i]);
}
    cout<<user_first_name<<user_last_name[0]<<endl; //Prints username option 2
    
    for (i = 0; user_first_name[i] != '\0', user_last_name[i] != '\0'; ++i) {
       user_first_name[i] = toupper(user_first_name[i]);
       user_last_name[i] = toupper(user_last_name[i]);
}
    cout<<user_first_name[0]<<user_last_name<<endl; //Prints username option 3
  

return 0;
}