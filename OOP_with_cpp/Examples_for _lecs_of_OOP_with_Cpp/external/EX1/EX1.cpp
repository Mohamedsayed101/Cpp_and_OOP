/*
System Theme: Library Management System
You will design a system with three primary classes:
1. Book: Represents the details of a book.
2. Member: Represents a library member.
3. Librarian: Combines properties of Book and Member
through multiple inheritance and introduces additional
functionality.

Class Details
1. Class Book
 Attributes:
o Public:
 string genre - Genre of the book (e.g., Fiction,
Non-fiction).
o Protected:
 string title - The title of the book.
 string author - The author of the book.
 int yearPublished - Year the book was published.
o Private:
 double price - Price of the book.
 int stock - Number of copies available
Static Attribute:
o static int totalBooks - Total number of books in the
library
 Methods:
o void displayDetails() - Prints the book's details.
o void updatePrice(double newPrice) - Updates the
book's price.
o void updateStock(int newStock) - Updates the stock of
the book.
o bool isAuthor(string authorName) - Checks if the given
name matches the author.
 Constructor: Initializes all attributes and increments
totalBooks.
 Destructor: Decrements totalBooks and prints a message
when the book object is destroyed

*/

#include <iostream>
#include <string>
using namespace std;

class Book {
    
    protected:
    string title;
    string author;
    int yearPublished;

    private:
    double price;
    int stock;
    static int totalBooks;
    
    public:
    string genre;
    Book(){}
    Book(string g, string t, string a, int y, double p, int s) : genre(g), title(t), author(a), yearPublished(y), price(p), stock(s) {
        totalBooks++;
    }
    
    void displayDetails() {
        cout << "Genre: " << genre << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year Published: " << yearPublished << endl;
        cout << "Price: $" << price << endl;
        cout << "Stock: " << stock << endl;
    }
    
    void updatePrice(double newPrice) {
        price = newPrice;
    }
    
    void updateStock(int newStock) {
        stock = newStock;
    }
    
    bool isAuthor(string authorName) {
        return author == authorName;
    }
    friend bool operator==(const Book& a, const Book& b);
    friend Book operator +(const Book &a, const Book &b);
    ~Book() {
        totalBooks--;
        cout << "Book '" << title << "' destroyed." << endl;
    }

};
/*
2. Class Member
 Attributes:
o Public:
 int membershipType - Type of membership (e.g., 1
for Basic, 2 for Premium).
o Protected:
 string name - Name of the member.
 int memberID - ID of the member.
o Private:
 int borrowedBooks - Number of books currently
borrowed.
 double outstandingFines - Amount of fines due.
Static Attribute:
o static int totalMembers - Total number of members in
the library (shared across all objects).
 Methods:
o void displayInfo() - Prints the member's details.
o void borrowBook() - Increments borrowedBooks by 1.
o void returnBook() - Decrements borrowedBooks by 1 (if
greater than 0).
o void payFine(double amount) - Reduces
outstandingFines by the given amount.
 Constructor: Initializes all attributes and increments
totalMembers.
 Destructor: Decrements totalMembers and prints a
message when the member object is destroyed.

*/
class Member 
{
private:
    int borrowedBooks;
    double outstandingFines;
    static int totalMembers;
protected:
    string name;
    int memberID;    
public:
    int membershipType;
    Member (){}
    Member (int memberID, string name, int membershipType, int borrowedBooks, double outstandingFines):memberID(memberID),name(name),membershipType(membershipType),borrowedBooks(borrowedBooks),outstandingFines(outstandingFines)
    { totalMembers++; }
    
    void displayInfo(){
        cout << "Member ID: " << memberID << endl;
        cout << "Name: " << name << endl;
        cout << "Membership Type: " <<(membershipType == 1 ? "Basic" : "Premium")  << endl;
        cout << "Borrowed Books: " << borrowedBooks << endl;
        cout << "Outstanding Fines: $" << outstandingFines << endl;
    }
    
    void borrowBook(){
        borrowedBooks++;
    }
    
    void returnBook(){
        if(borrowedBooks>0)
            borrowedBooks--;
    }
    
    void payFine(double amount){
        outstandingFines-=amount;
    }
    friend bool operator==(const Member& a, const Member& b);
    friend Member operator +(const Member &a, const Member &b);
    ~Member (){
        totalMembers--;
        cout << "Member '" << name << "' destroyed." << endl;
    }
};

/*
3. Class Librarian (inherits from Book and Member)
 Attributes:
o Public:
 string shift - Work shift of the librarian (e.g.,
"morning" or "evening").
o Protected:
 int libraryID - Unique ID for the librarian.
 int totalBooksIssued - Total books issued by the
librarian.
o Private:
 int salary - Monthly salary of the librarian.
 Static Attribute:
o static int totalLibrarians - Total number of librarians
(shared across all objects).
 Methods:
o void issueBook() - Increments totalBooksIssued by 1.
o void manageBook(string newTitle) - Updates the title of
the inherited Book.
o void displayLibrarianDetails() - Prints all details of the
librarian.
 Constructor: Initializes all attributes, invokes constructors of
Book and Member, and increments totalLibrarians.
 Destructor: Decrements totalLibrarians and prints a
message when the librarian object is destroyed.
Operator Overloading
 Overload the + operator to:
o Add the number of books borrowed by two Member
objects.
Add the stock of two Book objects.
 Overload the == operator to:
o Check if two books have the same title and author.
o Check if two members have the same membership type
and outstanding fines.
 Overload the << operator for printing details of a Librarian.
*/
//multiple inheritance form book and member

class Librarian : public Book, public Member
{
    private:
    int salary;
    static int totalLibrarians;

    protected:
    int libraryID;
    int totalBooksIssued;

    public:
    string shift;
    
    Librarian(int libraryID,int totalBooksIssued, string name, int membershipType, int borrowedBooks, double outstandingFines, int memberID, 
    string shift, int salary, int yearPublished, double price, int stock, string genre, string title, string author):
    Book(genre, title, author, yearPublished, price, stock), 
    Member(memberID, name, membershipType, borrowedBooks, outstandingFines),
    libraryID(libraryID), shift(shift),totalBooksIssued(totalBooksIssued),salary(salary){
        totalLibrarians++;
    }
    
    void issueBook(){
        totalBooksIssued++;
    }
    
    void manageBook(string newTitle){
        title=newTitle;
    }
    
    void displayLibrarianDetails(){
        cout << "Library ID: " << libraryID << endl;
        cout << "Shift: " << shift << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Total Books Issued: " << totalBooksIssued << endl;
        cout << "Member Details: " << endl;
        displayInfo();
        cout << "Book Details: " << endl;
        displayDetails();
    }
    
    friend ostream& operator <<(ostream& os, Librarian& librarian);
    
    ~Librarian(){
        totalLibrarians--;
        cout << "Librarian '" << name << "' destroyed." << endl;
    }
};
ostream& operator <<(ostream& os, Librarian& librarian){
        os << "Library ID: " << librarian.libraryID << endl;
        os << "Shift: " << librarian.shift << endl;
        os << "Salary: $" << librarian.salary << endl;
        os << "Total Books Issued: " << librarian.totalBooksIssued << endl;
        os << "Member Details: " << endl;
        librarian.Member::displayInfo();
        os << "Book Details: " << endl;
        librarian.Book::displayDetails();
        return os;
    }

bool operator==(const Book &a, const Book &b)
{
    return ((a.title==b.title)&&(a.author==b.author));
}
bool operator==(const Member &c, const Member &d){
    return ((c.membershipType==d.membershipType)&&(c.outstandingFines==d.outstandingFines));
}
Member operator +(const Member &a, const Member &b){
    Member m;
    m.borrowedBooks=a.borrowedBooks+b.borrowedBooks;
    return m ;
}
Book operator +(const Book &a, const Book &b){
    Book b1;
    b1.stock=a.stock+b.stock;
    return b1;
}
int Book::totalBooks=0;

int Member::totalMembers=0;

int Librarian::totalLibrarians=0;


int main()
{

    return 0;
}