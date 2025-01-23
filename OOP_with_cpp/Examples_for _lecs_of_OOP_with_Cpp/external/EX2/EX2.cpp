#include <iostream>
#include <string>
using namespace std;
/*
Assignment 2
Class Hierarchy
1. Abstract Base Class: Person
 Represents a general person in the library.
 Attributes:
o Public:
 int age - Age of the person.
o Protected:
 string name - Name of the person.
o Private:
 int id - Unique ID of the person.
 Methods:
Pure virtual function: virtual void displayRole() = 0; - Displays the role of
the person.
o Virtual function: virtual void displayInfo(); - Prints basic information (name,
age, ID).
2. Derived Class: Member (inherits from Person)
 Represents a library member.
 Attributes:
o Public:
 int membershipType - Type of membership (e.g., 1 for Basic, 2 for
Premium).
o Protected:
 int borrowedBooks - Number of books currently borrowed.
o Private:
 double outstandingFines - Amount of fines due.
 Methods:
o Overrides displayRole() to print "Role: Member".
o Overrides displayInfo() to include membership type and borrowed books.
o New methods:
 void borrowBook() - Increments borrowedBooks
void returnBook() - Decrements borrowedBooks.
 void payFine(double amount) - Reduces outstandingFines by the
given amount
3. Derived Class: Librarian (inherits from Person)
 Represents a librarian who manages the library.
 Attributes:
o Public:
 string shift - Work shift of the librarian (e.g., "Morning").
o Protected:
 int totalBooksIssued - Total books issued by the librarian.
o Private:
 int salary - Monthly salary.
 Methods:
o Overrides displayRole() to print "Role: Librarian".
o Overrides displayInfo() to include shift and total books issued.
o New methods:
 void issueBook() - Increments totalBooksIssued.
o Overloaded operator:
 Overload the << operator to print librarian details.
4. Class: Book
 Represents a book in the library.
 Attributes:
o Public:
 string genre - Genre of the book (e.g., Fiction, Non-fiction).
o Protected:
 string title - Title of the book.
 string author - Author of the book.
o Private:
 int yearPublished - Year the book was published.
 int stock - Number of available copies.
 Static Attribute:
o static int totalBooks - Tracks the total number of books in the library.
 Methods:
 void displayDetails() - Prints book details.
o void updateStock(int newStock) - Updates stock of the book.
o Overloaded operators:
 Book operator+(const Book &b) - Combines stock of two books.
 bool operator==(const Book &b) - Checks if two books have the
same title and author.
Implementation Details
1. Base Class Person:
o Define displayRole() as a pure virtual function to enforce overriding.
o Define displayInfo() as a virtual function to provide runtime polymorphism.
2. Derived Classes:
o Override displayRole() and displayInfo() in Member and Librarian to
customize behavior.
o Add methods specific to their roles (e.g., borrowing books, issuing books).
3. Class Book:
o Manage book details and provide overloaded operators for functionality.
4. Polymorphism Demonstration:
o Create a list of Person* pointers pointing to Member and Librarian objects.
o Use a loop to call displayRole() and displayInfo() on each pointer,
demonstrating runtime polymorphism.
5. Static Attributes:
o Initialize and update static attributes to track totals (e.g., total books,
members, librarians).
6. Operator Overloading:
o Combine book stocks with + and compare books with ==.
o Use << to print librarian details.
Expected Output
1. Demonstrate polymorphism by dynamically calling virtual functions (displayRole()
and displayInfo()).
2. Show operator overloading for books (+ and ==) and librarians (<<).
3. Display static totals for books, members, and librarians
*/
class Person
{

private:
    int id;

protected:
    string name;

public:
    int age;
    Person() {};
    Person(string n, int a, int id) : name(n), age(a), id(id) {}

    virtual void displayRole() = 0;
    virtual void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << ", ID: " << id << endl;
    }
};

class Member : public Person
{
private:
    double outstandingFines;

protected:
    int borrowedBooks;

public:
    int membershipType;
    Member(string n, int a, int id, int m, int b, double f) : Person(n, a, id), membershipType(m), borrowedBooks(b), outstandingFines(f) {}
    Member() {}

    void displayRole() override
    {
        cout << "Role: Member" << endl;
    }
    void displayInfo() override
    {
        cout << "Membership Type: " << membershipType << ", Borrowed Books: " << borrowedBooks << ", Outstanding Fines: $" << outstandingFines << endl;
    }
    void borrowBook()
    {
        borrowedBooks++;
    }
    void returnBook()
    {
        if (borrowedBooks > 0)
            borrowedBooks--;
    }
    void payFine(double amount)
    {
        if (amount > 0 && outstandingFines > 0)
            outstandingFines -= amount;
    }
};

class Librarian : public Person
{
private:
    int salary;

protected:
    int totalBooksIssued;

public:
    string shift;
    Librarian(string n, int a, int id, string s, int t, int m) : Person(n, a, id), shift(s), totalBooksIssued(t), salary(m) {}
    Librarian() {}
    void displayRole() override
    {
        cout << "Role: Librarian" << endl;
    }
    void displayInfo() override
    {
        cout << "Shift: " << shift << ", Total Books Issued: " << totalBooksIssued << endl;
    }
    void issueBook()
    {
        totalBooksIssued++;
    }
    friend ostream &operator<<(ostream &os, Librarian &lib)
    {
        lib.Person::displayInfo();
        os << ", Salary: $" << lib.salary << endl;
        lib.displayInfo();
        return os;
    }
};

class Book
{
private:
    int yearPublished;
    int stock;
    static int totalBooks;

protected:
    string title;
    string author;

public:
    string genre;
    Book(string g, string t, string a, int y, int s) : genre(g), title(t), author(a), yearPublished(y), stock(s)
    {
        totalBooks++;
    }
    void displayDetails()
    {
        cout << "Genre: " << genre << ", Title: " << title << ", Author: " << author << ", Year Published: " << yearPublished << ", Stock: " << stock << endl;
    }
    void updateStock(int newStock)
    {
        stock += newStock;
    }
    Book operator+(const Book &b)
    {
        return Book(genre, title, author, yearPublished, stock + b.stock);
    }
    bool operator==(const Book &b)
    {
        return title == b.title && author == b.author;
    }
};
int main()
{

    return 0;
}

