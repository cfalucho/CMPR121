#include <iostream>
#include "Book.h"

Book::Book(){
    price = 0.0;
}

Book::Book(string bookTitle, float bookPrice, int month, int day, int year){
    
    title = bookTitle;
    this->price = bookPrice;
    date.setDate(month, day, year);
}

Book::~Book(){}

void Book::setTitle(string title){
    this->title = title;
}

void Book::setPrice(float bookPrice){
    price = bookPrice;
}

string Book::getTitle(){
    return title;
}

float Book::getPrice() const{
    return price;
}

void Book::displayBook() const {
        cout << "Title: " << title << endl 
        << "Price: $" << price << endl;
        date.displayDate();
}