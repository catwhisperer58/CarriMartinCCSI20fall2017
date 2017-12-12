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
    ifstream grades; // Input file stream
      
    const int NUM_ELEMENTS = 25;
    //const char LETTER_GRADE = 5;
    int each_student;
    string first_name;
    string last_name;
    double semester_gpa;
    int num_classes;
    int num_hours[NUM_ELEMENTS];
    char student_grades[NUM_ELEMENTS];
    
    int i = 0;
    int j = 0;
    
   // Used to test file opening
   //cout << "Opening file input.txt." << endl;
   
   grades.open("input.txt");
   if (!grades.is_open()) {
      cout << "Could not open file myfile.txt." << endl;
      return 1; // 1 indicates error
}
while (!grades.eof()) {

  grades>>first_name;
  grades>>last_name;
  grades>>num_classes;
  
for (i = 0; i < num_classes; ++i) {
     
  grades>>num_hours[i];
  grades>>student_grades[i];
  
}
      if(grades.good() ) {
      }          
          for (i = 0; i < num_classes; ++i) {
              for (j = 0; j < num_hours; ++j) {
              cout<<first_name<<" "<<last_name<<endl;
              cout<<num_classes<<endl;
              cout<<num_hours[i]<<" "<<student_grades[j]<<endl;
          
              }          

}
} 

   return 0;
  
} 

/*
*/