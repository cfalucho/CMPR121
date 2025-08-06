#include <iostream>
#include <string>
#include "Book.h"

Book::Book(string ISBN, int year, double price){
    this->ISBN = ISBN;
    this->year = year;
    this->price = price; 
}
Book::~Book(){

};
void Book::displayBook() const{
    cout << "ISBN: " << ISBN << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
};

