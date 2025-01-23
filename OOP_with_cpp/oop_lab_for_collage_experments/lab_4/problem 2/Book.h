#include <iostream>
#include <string>
using namespace std;
/*
Create a Book class with attributes: title, author, isAvailable, and availableBooks to keep track of the total number of the
available books.
Create setters, getters, and a parameterized constructor for title, author with the same of the class attributes.
Write a BorrowBook method to mark a book as unavailable.
Write a ReturnBook method to mark a book as available.
Write a ShowBookDetails method to display the book's details.
Write a GetAvailableBooks method to get available books count.
*/
class Book
{
private:
    string title, author;
    bool isAvailable;
    static int availableBooks;
public:
    Book();
    Book(string title, string author);
    void SetAvailability(bool isAvailable);
    bool GetAvailability();
    void BorrowBook();
    void ReturnBook();
    void setTitle(string title);
    void setAuthor(string author);
    string getTitle() const;
    string getAuthor() const;
    static int GetAvailableBooks();
    void ShowBookDetails();
    ~Book();
};
