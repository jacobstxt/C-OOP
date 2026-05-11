#include <iostream>
#include <string.h>

using namespace std;


class book_series 
{
public:
    book_series(const char*, const char*, float); 
    void show_book(void);
    void set_pages(int);
private:
    static int page_count;
    char title[64];
    char author[64];
    float price;
}; 

int book_series::page_count;

book_series::book_series(const char* title,const char* author, float price)
{
    strcpy_s(book_series::title, title);
    strcpy_s(book_series::author, author);
    book_series::price = price;
}

void book_series::show_book(void) 
{
    cout << " Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << " Price: " << price << endl;
    cout << " Pages: " << page_count << endl;
}
void book_series::set_pages(int pages) 
{
    page_count = pages;
}


int main()
{
    book_series Programming("C/C++ Programmer's Bible", "Kris Jamsa", 799.95f);
    book_series Word("Microsoft Office 2019 Inside ", "Joe Habraken", 649.95f);

    Word.set_pages(256);
    Programming.show_book();
    Word.show_book();
    cout << endl << "Change page_count " << endl;
    Programming.set_pages(512);

    Programming.show_book();
    Word.show_book();
}

