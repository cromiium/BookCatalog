#ifndef BOOK_H
#define BOOK_H

#include <string>
using std::string;

//Book class definition
class Book{
    public:
        Book();
        Book(string myTitle, string myAuthor, string myGenre, int myPageCount, bool isRead);

        //GETTERS AND SETTERS
        string getTitle();
        string getAuthor();
        string getGenre();
        int getPageCount();
        bool getIsRead();
        
        void setTitle(string myTitle);
        void setAuthor(string myAuthor);
        void setGenre(string myGenre);
        void setPageCount(int myPageCount);
        void setIsRead(bool isRead);

        //MISC. METHODS
        void displayAll();

    private:
        string myTitle;
        string myAuthor;
        string myGenre;
        int myPageCount;
        bool isRead;
};



#endif
