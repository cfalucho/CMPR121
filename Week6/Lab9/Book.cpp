#include <iostream>
#include <string>
#include "Book.h"

Book::Book(){
    ISBN = "";
    year = 0;
    price = 00.00;
    bookCount++;
}
Book::Book(string ISBN, int year, double price){
    this->ISBN = ISBN;
    this->year = year;
    this->price = price; 
    bookCount++;
}
Book::~Book(){

}
int Book::bookCount = 0;
void Book::displayBook() const{
    cout << "ISBN: " << ISBN << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
}

int Book::getCount(){
    return bookCount;
}

// Use to compare prices of two Book objects.
bool Book::operator>(Book& book) const{
    if (this->price > book.price)
    {
        return true;
    }else{
        return false;
    }
}          
// Use to compare prices of two Book objects.
bool Book::operator==(Book& book) const{
    if (this->price == book.price)
    {
        return true;
    }else{
        return false;
    }
}          
// Use to compare an object’s price to 10.00.    
bool Book::operator>(double price){
    if (this->price > price)
    {
        return true;
    }else{
        return false;
    }   
}	                       
double Book::operator+(Book& book){
    return price + book.price;
}                  
bool Book::operator<(int year){
    if(this->year < year){
        return true;
    }else{
        return false;
    }
}                            
ostream& operator<<(ostream& osObject, Book& book){
    osObject << "ISBN:  " << book.ISBN << endl 
             << "Year:  " << book.year << endl  
             << "Price: " << book.price << endl;

    return osObject;
}    
istream& operator>>(istream& stream, Book& book)
{
	cout << "ISBN:   ";
	stream >> book.ISBN;
	cout << "Year:   ";
	stream >> book.year;
	cout << "Price:  ";
	stream >> book.price;

	return stream;
}


