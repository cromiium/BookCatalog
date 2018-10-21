#include <iostream>
#include "Book.h"
using std::cout;
using std::cin;
using std::endl;

void init(); //Initializes application
void save(); //Saves application
void display(); //Writes what's in file on screen
void addBook(); //Writes a book to file
void alterBook(); //Changes book in a file
void deleteBook(); //Deletes book from file
void controls(); //Outputs main controls/options 

int main(){

    controls();



return 0;
}


void init(){
    
}

void save(){

}

void display(){

}

void addBook(){
    cout << "ADD A BOOK TO FILE:" << endl;
    cout << "\n"
            "Creating New Book:" << endl;

    cout << "Enter Title:" << endl;
    cin >> myTitle;
    cout << "Enter Author:" << endl;
    cin >> myAuthor;
    cout << "Enter Genre:" << endl;
    cin >> myGenre;
    cout << "Enter Page Count:" << endl;
    cin >> myPageCount;
    cout << "Have you read it?(Y/n)" << endl;
    cin >> IsRead;
    cout << "Confirm that this is the correct information: " << endl;
    newBook.displayAll;
}

void alterBook(){

}

void deleteBook(){

}

void controls(){
    int myOption;
    cout << "Select an option" << endl;
    cout << "1) Open New File\n"
            "2) View File\n"
            "3) Add a Book to File\n"
            "4) Delete a Book from File\n"
            "5) Change details of a Book in file\n"
            "6) Save File\n"
            "7) Exit\n" << endl;
    
    cin >> myOption;
    switch(myOption){
        case 1: init();
                break;
        case 2: display();
                break;
        case 3: addBook();
                break;
        case 4: deleteBook();
                break;
        case 5: alterBook();
                break;
        case 6: save();
                break;
        case 7: return;
    }
}
