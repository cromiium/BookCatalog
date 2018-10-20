#include <iostream>
#include "BookCatalog.h"


//CONSTRUCTORS AND DESTRUCTORS
Book::Book(){
    this.myTitle = "";
    this.myGenre = "";
    this.myAuthor = "";
    this.myPageCount = 0;
}
Book::Book(string myTitle, string myAuthor, string myGenre, int myPageCount, bool isRead){
    this.myTitle = myTitle;
    this.myAuthor = myAuthor;
    this.myGenre = myGenre;
    if(myPageCount >= 0){
        this.myPageCount = myPageCount;
    }
    else
        myPageCount = 0;
    this.isRead = 0;
}

//GETTERS AND SETTERS
string getTitle(){
    return this.myTitle;
}
string getAuthor(){
    return this.myAuthor;
}
string getGenre(){
    return this.myGenre;
}
int getPageCount(){
    return this.myPageCount;
}
bool getIsRead(){
    return this.isRead;
}

void setTitle(string myTitle){
    this.myTitle = myTitle;
}
void setAuthor(string myAuthor){
    this.myAuthor = myAuthor;
}
void setGenre(string myGenre){
    this.myGenre = myGenre;
}
void setPageCount(int myPageCount){
    this.myPageCount = myPageCount;
}
void setIsRead(bool isRead){
    this.isRead = isRead
}
