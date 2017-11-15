#include<iostream>
#include<cstring>
using namespace std;

/*Written by Carri Martin
Date: November 9, 2017
Lab 4.4 C Strings
*/

//This program will allow the user to create their own user name for my new website


main() {
    
const int first_name = 10;
const int last_name = 20;
char user_first_name[10];
char user_last_name[20];
int i = 0;

cout<<"Enter your first name and then your last name: "<<endl;
cin>>user_first_name>>user_last_name;
cout<<endl;


//while ((i <= strlen(user_first_name) && (i <= strlen(user_last_name)))) {
       if ((strlen(user_first_name) < first_name) && (strlen(user_last_name) < last_name)) {
         if (user_first_name[i] != user_last_name[i]) {
     --i;
}

             else if (user_first_name[i] == user_last_name[i]) { 
           cout<<"Warning, first and last name are the same."<<endl;
           //cin>>user_first_name>>user_last_name;
}
     
} 
    else { ((strlen(user_first_name) > first_name) || (strlen(user_last_name) > last_name));
  cout<<"Your first name or your last name is larger than maximum size allowed."<<endl;
 
}
   cout<<"Name: "<<user_first_name<<" "<<user_last_name<<endl;
   cout<<"Which of the three user names would you like: "<<endl;
   cout<<endl;
   
   for (i = 0; user_first_name[i] != '\0', user_last_name[i] != '\0'; ++i) {
       user_first_name[i] = tolower(user_first_name[i]);
       user_last_name[i] = tolower(user_last_name[i]);
}
   cout<<user_first_name[0]<<user_first_name[1]<<user_last_name<<endl;
   
   for (i = 0; user_first_name[i] != '\0', user_last_name[i] != '\0'; ++i) {
       user_first_name[i] = tolower(user_first_name[i]);
       user_last_name[i] = toupper(user_last_name[i]);
}
    cout<<user_first_name<<user_last_name[0]<<endl;
    
    for (i = 0; user_first_name[i] != '\0', user_last_name[i] != '\0'; ++i) {
       user_first_name[i] = toupper(user_first_name[i]);
       user_last_name[i] = toupper(user_last_name[i]);
}
    cout<<user_first_name[0]<<user_last_name<<endl;
   

return 0;
}

/*Running /home/ubuntu/workspace/lab44/lab44.cpp
Enter your first name and then your last name: 
Carri Martin

Name: Carri Martin
Which of the three user names would you like: 

camartin
carriM
CMARTIN

Running /home/ubuntu/workspace/lab44/lab44.cpp
Enter your first name and then your last name: 
April Browne

Name: April Browne
Which of the three user names would you like: 

apbrowne
aprilB
ABROWNE

Running /home/ubuntu/workspace/lab44/lab44.cpp
Enter your first name and then your last name: 
AnaElizabeth Hazeltine-Smith

Your first name or your last name is larger than maximum size allowed.
Name: AnaElizabeth Hazeltine-Smith
Which of the three user names would you like: 

anhazeltine-smith
anaelizabethH
AHAZELTINE-SMITH


Process exited with code: 0


Process exited with code: 0


Process exited with code: 0

*/