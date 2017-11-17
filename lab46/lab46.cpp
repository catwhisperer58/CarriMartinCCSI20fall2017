#include<iostream>
#include<fstream>
#include<string>
#include<ios>
#include<iomanip>
using namespace std;

/*This program is written by Carri Martin
Date: November 16, 2017
Title: Lab 4.6 File Input/Output
*/

//This program will input data regarding students GPA, from a text file, and then output the data into an HTML format

int main() {
    ifstream inFS; // Input file stream
      
    const int NUM_ELEMENTS = 50;
    string firstName;
    string lastName;
    double semester_gpa[50];
    int numClasses;
    int numHours[50];
    char grades[50];
    int i = 0;
    
   // Try to open file
   cout << "Opening file input.txt." << endl;
   
   inFS.open("input.txt");
   if (!inFS.is_open()) {
      cout << "Could not open file myfile.txt." << endl;
      return 1; // 1 indicates error
   }

  inFS>>firstName;
  inFS>>lastName;
  inFS>>numClasses;
  inFS>>numHours[i];
  inFS>>grades[i];

  
 

  cout<<firstName<<lastName<<endl;
  cout<<numClasses<<endl;
  //for (i=0; i < NUM_ELEMENTS; ++i) {
  cout<<numHours[i]<<grades[i];
  
   return 0;
  
} 