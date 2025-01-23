#include <iostream>
#include "Book.h"
#include <string>
using namespace std;
int main() {

    Book book1("C++ Programming", "John Doe");
    Book book2("Data Structures and Algorithms", "Jane Smith");
    book1.BorrowBook();
    book1.ReturnBook();
    book1.ShowBookDetails();
  
    return 0;
}