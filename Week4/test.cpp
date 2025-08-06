#include <iostream>
#include <string>
#include "Book.cpp"
// #include "Date.h"



int main (){

    Book heroes("Hots", 12.3, 1, 2, 2002);
    heroes.displayBook();

    Date dates;
    dates.setDate(11,12,2024);
    dates.displayDate();
    return 0;
}