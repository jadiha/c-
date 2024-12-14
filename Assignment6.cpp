/* Jadiha Aruleswaran
21009117
09/11/2022
SYDE 121
Assignment 6
*/

#include <iostream>
#include <string>

using namespace std;

class Book {

    public: 

    string title;
    string author;
    string date_of_publication;

    Book(string title, string author){ // title, authors provided & the date of publication = “n/a,”
        title = title;
        author = author;
        date_of_publication = "N/A";
        cout << title << author << date_of_publication;
    }

    Book(string title){ //  title provided & other two attributes set to “n/a.”
        title = title;
        author = "N/A";
        date_of_publication = "N/A";
    }

    Book(){ // default constructor with no parameters that sets all three attributes to “n/a.”
        title = "N/A";
        author =  "N/A";
        date_of_publication = "N/A";
        cout << title << author << date_of_publication;
    }
};

  int main(){

        Book landofstories; // test for a book 

        string title;
        string author;
        string date_of_publication;

        // input from user 
        cout << "Enter the title for the book: ";
        cin >> title; 

        cout << "Enter the author for the book: ";
        cin >> author; 

        cout <<"Enter the date of publication for the book: ";
        cin >> date_of_publication;

        landofstories = Book(title, author);
        landofstories = Book(title);
        landofstories = Book();
        return 0;

    }

