#include <iostream> //Preprocessor directives: Input/output stream
#include <cstdlib> //Standard library, useful, all around
using namespace std;

/*This class gives a book title, author of said book and year of copyright
*/

class Book { //Class name, Book
    public: //May be accessed out of the class
    
    void SetBookTitle(string book_title_to_set); //Mutator
    void SetBookAuthor(string book_author_to_set); //Mutator
    void SetBookYear(int copyright_year_to_set); //Mutator
    
    string GetBookTitle()  const; //Accessor
    string GetBookAutor()  const; //Accessor
    int GetBookYear()  const; //Accessor
    
    void Print(); //Printing 
    
    private: //May only be accessed from inside the same class
    
    string book_title; //Private string variable
    string book_author;//Private stringvariable
    int copyright_year; //Private integer variable
    
};
    
void Book::SetBookTitle(string book_title_to_set) { //Function to set book title
    book_title = book_title_to_set;
    
    return;
}

void Book::SetBookAuthor(string book_author_to_set) { //Function to set book's author
    book_author = book_author_to_set;
    
    return;
}

void Book::SetBookYear(int copyright_year_to_set) { //Function to set copyright year
    copyright_year = copyright_year_to_set;
    
    return;
}

void Book::Print() { //Print function
    cout<<"Book: "<<book_title<<endl;
    cout<<"Author: "<<book_author<<endl;
    cout<<"Year copyrighted: "<<copyright_year<<endl;
    return;
}

string Book::GetBookTitle() const { 
    return book_title;
}

string Book::GetBookAutor() const {
    return book_author;
}

int Book::GetBookYear() const {
    return copyright_year;
}

int main() { //Entry point for the code execution
    string user_book_title; //
    string user_book_author;
    int user_book_year;
    Book book1;
    Book book2;
    Book book3;
    Book book4;
    Book book5;
    
    /*Seperate output/user input for eaach book
    */
    cout<<"Name a book: "; //Output
    cin>>user_book_title; //User input
    cout<<"Name of the author: "; //Output
    cin>>user_book_author; //User input
    cout<<"What year was this book copyrighted? "; //Output
    cin>>user_book_year; //User input
    cout<<endl; //Line maker
    
    book1.SetBookTitle(user_book_title); //Call for user title for first book
    book1.SetBookAuthor(user_book_author); //Call for author for first book
    book1.SetBookYear(user_book_year); //Call for copyright year for first book
    
    book1.Print(); //Call to print
    cout<<endl; //Line maker
    cout<<endl; //Line maker
    
    cout<<"Name a book: "; //Output
    cin>>user_book_title; //User input
    cout<<"Name of the author: "; //Output
    cin>>user_book_author; //User input
    cout<<"What year was this book copyrighted? "; //Output
    cin>>user_book_year; //User input
    cout<<endl; //Line maker
    
    book2.SetBookTitle(user_book_title); //Call for title for 2nd book
    book2.SetBookAuthor(user_book_author); //Call for author 
    book2.SetBookYear(user_book_year); //Call for year
    
    book2.Print(); //Call to print
    cout<<endl; //Line maker
    cout<<endl; //Line maker
    
    cout<<"Name a book: "; //Output
    cin>>user_book_title; //User input
    cout<<"Name of the author: "; //Output
    cin>>user_book_author; //User input
    cout<<"What year was this book copyrighted? "; //Output
    cin>>user_book_year; //User input
    cout<<endl; //Line maker
    
    book3.SetBookTitle(user_book_title); //Call for title
    book3.SetBookAuthor(user_book_author); //Call for author
    book3.SetBookYear(user_book_year); //Call for year
    
    book3.Print(); //Call to print 3rd book
    cout<<endl; //Line maker
    cout<<endl; //Line maker
    
    cout<<"Name a book: "; //Output
    cin>>user_book_title; //User input
    cout<<"Name of the author: "; //Output
    cin>>user_book_author; //User input
    cout<<"What year was this book copyrighted? "; //Output
    cin>>user_book_year; //User input
    cout<<endl; //Line maker
    
    book4.SetBookTitle(user_book_title); //Call for 4th title
    book4.SetBookAuthor(user_book_author); //Call for author
    book4.SetBookYear(user_book_year); //Call for year
   
    book4.Print(); //Call to print 4th book info
    cout<<endl; //Line maker
    cout<<endl; //Line maker
    
    cout<<"Name a book: "; //Output
    cin>>user_book_title; //User input
    cout<<"Name of the author: "; //Output
    cin>>user_book_author; //User input
    cout<<"What year was this book copyrighted? "; //Output
    cin>>user_book_year; //User input
    cout<<endl; //Line maker
    
    book5.SetBookTitle(user_book_title); //Call for title of 5th book
    book5.SetBookAuthor(user_book_author); //Call for author
    book5.SetBookYear(user_book_year); //Call for year
    
    book5.Print(); //Call to print 5th book info
    
    
}
/*Running /home/ubuntu/workspace/lab25/lab25.cpp
Name a book: Alice's_Adventures_in_Wonderland
Name of the author: Lewis_Carroll
What year was this book copyrighted? 1865

Book: Alice's_Adventures_in_Wonderland
Author: Lewis_Carroll
Year copyrighted: 1865


Name a book: The_Time_Machine
Name of the author: HG_Wells
What year was this book copyrighted? 1895

Book: The_Time_Machine
Author: HG_Wells
Year copyrighted: 1895


Name a book: The_Jungle_Book
Name of the author: Rudyard_Kipling
What year was this book copyrighted? 1894

Book: The_Jungle_Book
Author: Rudyard_Kipling
Year copyrighted: 1894


Name a book: The_Lion_the_Witch_and_the_Wardrobe
Name of the author: CS_Lewis
What year was this book copyrighted? 1950

Book: The_Lion_the_Witch_and_the_Wardrobe
Author: CS_Lewis
Year copyrighted: 1950


Name a book: The_Clan_of_the_Cave_Bear
Name of the author: Jean_Auel
What year was this book copyrighted? 1980

Book: The_Clan_of_the_Cave_Bear
Author: Jean_Auel
Year copyrighted: 1980


Process exited with code: 0

*/


