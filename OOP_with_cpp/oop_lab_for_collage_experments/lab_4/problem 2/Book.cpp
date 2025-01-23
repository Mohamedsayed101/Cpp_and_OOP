#include "Book.h"
#include <iostream>
#include <string>
using namespace std;
int Book::availableBooks = 0;
Book::Book():title(""),author(""),isAvailable(true)
{
    availableBooks++;
}

Book::Book(string title, string author):title(title),author(author),isAvailable(true)
{
    availableBooks++;
}

void Book::SetAvailability(bool isAvailable)
{
    this->isAvailable = isAvailable;
    if (isAvailable)
    {
        availableBooks++;
    }
    else
    {
        availableBooks--;
    }
}

bool Book::GetAvailability()
{
    return isAvailable;
}

void Book::BorrowBook()
{
    if (isAvailable)
    {
        cout << "Book borrowed successfully!" << endl;
        isAvailable = false;
        availableBooks--;
    }
    else
    {
        cout << "Book is not available. Try again later." << endl;
    }
}

void Book::ReturnBook()
{
    if (!isAvailable)
    {
        cout << "Book returned successfully!" << endl;
        isAvailable = true;
        availableBooks++;
    }
    else
    {
        cout << "Book is already in the library." << endl;
    }
}

void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

int Book::GetAvailableBooks()
{
    return availableBooks;
}

void Book::ShowBookDetails()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Available Books: " << availableBooks << endl;
}

Book::~Book()
{
    availableBooks--;
}
