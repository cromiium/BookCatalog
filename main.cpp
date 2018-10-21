#include <iostream>
#include "Book.h"
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void init(); //Initializes application
void save(); //Saves application
void display(); //Writes what's in file on screen
void addBook(); //Writes a book to file
void alterBook(); //Changes book in a file
void deleteBook(); //Deletes book from file
void controls(); //Outputs main controls/options 
void writeToFile(); //Writes book to file

int main(){
    
    string str;
    while(cin >> str){
        controls();
    }

//TODO: Work on this loop. It needs the user to type something before it displays control

return 0;
}


void init(){
    
}

void save(){

}

void display(){

}

void addBook(){
    char isReadConfirmation, isCorrectConfirmation, recreationConfirmation;
    string myTitle, myAuthor, myGenre;
    int myPageCount;
    bool isRead;
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
    cin >> isReadConfirmation;
    if(isReadConfirmation == 'Y'){
        isRead = 1;
    }else{
        isRead = 0;
     }
     Book newBook(myTitle, myAuthor, myGenre, myPageCount, isRead);
    cout << "Confirm that this is the correct information:(Y/n)" << endl;
    newBook.displayAll();
    cin >> isCorrectConfirmation;
    if(isCorrectConfirmation == 'Y'){
        writeToFile();
    }else{
        cout << "Do you want to recreate the Book?(Y/n)" << endl;   
        cin >> recreationConfirmation; 
        if(recreationConfirmation == 'Y'){
            addBook();
        }else
            return;
    }
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
            "6) Save File and Exit\n";
    
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

void writeToFile(){

}
