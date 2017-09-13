#include <iostream>
#include <string>
using namespace std;

/* This is a Mad Lib word game.

Title: The 89th Annual Doggie Awards
Author: Carri Martin
Date: 9-7-2017
*/

int main () {
    
    
    string noun1; // This is a noun to name the awards show
    string exclaMation1; // This is an exclamation!
    string verbIng; // A verb ending in ing
    string firstName1; // A person's name
    string adj1; // Adjective
    string noun2; // Another noun
    string firstName2; // Second first name to use
    string lastName1; // Using a last name in this spot
    double numFirst = 0; // Where I want a number
    double numSecond = 0; // I've made a second option for a number in case I want one to be a decimal
    string plurNoun1; // Plural noun needed
    string noun3; // Another noun
    string adj2; // Another adjective needed
    string color1; // Need a color
    string verb1; // Any verb
    string typeFood; // Type of food
    string partOfBody; // Part of body
    string plurNoun2; // Another plural noun
    string noun4; // Another noun
    
    cout << "Choose a noun with a capital letter: "; // This is for the Title of the Mad Lib
    cin >> noun1;
    cout << "Choose an exclamation: "; // Self explanatory :)
    cin >> exclaMation1;
    cout << "Choose a verb ending in ing: "; // Verb ending in 'ing'
    cin >> verbIng;
    cout << "Choose a person's first name: "; // First of two first names that you'll need
    cin >> firstName1;
    cout << "Choose an adjective: "; 
    cin >> adj1;
    cout << "Choose a noun: ";   
    cin >> noun2;
    cout << "Choose a person's first name: "; // It can be the same name used, or a different one
    cin >> firstName2;
    cout << "Choose a last name: ";
    cin >> lastName1;
    cout << "Choose a number, integer or decimal: ";
    cin >> numFirst;
    cout << "Choose a number, integer or decimal: ";
    cin >> numSecond;
    cout << "Choose a plural noun: ";
    cin >> plurNoun1;
    cout << "Choose another noun: ";
    cin >> noun3;
    cout << "Choose another adjective: ";
    cin >> adj2;
    cout << "Choose a color: "; // Any color
    cin >> color1;
    cout << "Choose a verb: ";
    cin >> verb1; 
    cout<< "Choose a type of food: "; // Any type of food
    cin >> typeFood;
    cout << "Choose a body part: "; // Any body part
    cin >> partOfBody;
    cout << "Choose another plural noun: ";
    cin >> plurNoun2;
    cout << "Choose another noun: ";
    cin >> noun4;
    
    cout << endl;
    cout << "The 89th Annual " << noun1 << " Awards" << endl;
    cout << endl;
    cout << exclaMation1 << "! It's the awards show you've been " << verbIng << " for all year: the " << firstName1 << "s!" << endl;
    cout << "There are many " << adj1 << " reasons to watch this year's " << noun2 << endl;
    cout << "Here are a few: " << endl;
    
    cout << "   *   " << firstName2 << " " << lastName1 << " is hosting so your're guarenteed at least " << numFirst << endl;
    cout << "        good laughs!" << endl;
    cout << "   *   " << "You invested " << numSecond << " dollars to watch all the " << plurNoun1 << " nominated for Best " << endl;
    cout << "        Picture. That's money you could have spent on a brand-new " << noun3 << "!" << endl;
    cout << "   *   " << "To admire all the " << adj2 << " dresses on the " << color1 << " carpet and " << verb1 << endl;
    cout << "        at all the fashion disasters!" << endl;
    cout << "   *   " << "You need an excuse to make " << typeFood << " Pie for your annual " << firstName1 << "s themed party." << endl;
    cout << "   *   " << "You might lose your " << partOfBody << " if your watch one more rerun of Chopped and Diners, " << endl;
    cout << "       " << plurNoun2 << ", and Dives on the " << noun4 << " Network." << endl;
    
}

/*Running /home/ubuntu/workspace/lab15/lab15.cpp
Choose a noun with a capital letter: Doggie
Choose an exclamation: Ohmygosh
Choose a verb ending in ing: panting
Choose a person's first name: Milo 
Choose and adjective: barking
Choose a noun: dogfest
Choose a person's first name: April
Choose a last name: Brown
Choose a number, integer or decimal: 4.6
Choose a number, integer or decimal: 1000
Choose a plural noun: dogs
Choose another noun: dogbed
Choose another adjective: catlike
Choose a color: calico
Choose a verb: laugh
Choose a type of food: Kibble
Choose a body part: mind
Choose another plural noun: Mutts
Choose another noun: Puppybowl

The 89th Annual Doggie Awards

Ohmygosh! It's the awards show you've been panting for all year: the Milos!
There are many barking reasons to watch this year's dogfest
Here are a few: 
   *   April Brown is hosting so your're guarenteed at least 4.6
        good laughs!
   *   You invested 1000 dollars to watch all the dogs nominated for Best 
        Picture. That's money you could have spent on a brand-new dogbed!
   *   To admire all the catlike dresses on the calico carpet and laugh
        at all the fashion disasters!
   *   You need an excuse to make Kibble Pie for your annual Milos themed party.
   *   You might lose your mind if your watch one more rerun of Chopped and Diners, 
       Mutts, and Dives on the Puppybowl Network.
*/
    
    