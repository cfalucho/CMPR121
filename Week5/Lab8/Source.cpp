#include <iostream>
#include <string>
#include "Book.h"

using namespace std;


int main(){

    Book book1("0-12345-9", 2024, 12.5);
    Book book2("0-54321-9", 2001, 7.75);

    cout << "Book #1" << endl;
    book1.displayBook();
    cout << endl;
    cout << "Book #2" << endl;
    book2.displayBook();


    return 0;
}