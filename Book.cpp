#include <iostream>
#include "Book.h"
using std::cout;
using std::endl;

//CONSTRUCTORS AND DESTRUCTORS
Book::Book(){
    this->myTitle = "";
    this->myGenre = "";
    this->myAuthor = "";
    this->myPageCount = 0;
}
Book::Book(string myTitle, string myAuthor, string myGenre, int myPageCount, bool isRead){
    this->myTitle = myTitle;
    this->myAuthor = myAuthor;
    this->myGenre = myGenre;
    if(myPageCount >= 0){
        this->myPageCount = myPageCount;
    }
    else
        myPageCount = 0;
    this->isRead = 0;
}

//GETTERS AND SETTERS
string Book::getTitle(){
    return this->myTitle;
}
string Book::getAuthor(){
    return this->myAuthor;
}
string Book::getGenre(){
    return this->myGenre;
}
int Book::getPageCount(){
    return this->myPageCount;
}
bool Book::getIsRead(){
    return this->isRead;
}

void Book::setTitle(string myTitle){
    this->myTitle = myTitle;
}
void Book::setAuthor(string myAuthor){
    this->myAuthor = myAuthor;
}
void Book::setGenre(string myGenre){
    this->myGenre = myGenre;
}
void Book::setPageCount(int myPageCount){
    this->myPageCount = myPageCount;
}
void Book::setIsRead(bool isRead){
    this->isRead = isRead;
}

void Book::displayAll(){
    cout << this->myTitle << endl;
    cout << this->myAuthor << endl;
    cout << this->myGenre << endl;
    cout << this->myPageCount << endl;
    if(this->isRead){
        cout << "Read" << endl;
    }else{
        cout << "Not Read" << endl;
    }
}
