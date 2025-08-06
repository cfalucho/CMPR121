#include "Date.h"

Date::Date(){
    month = 0;
    day = 0;
    year = 0;
}
Date::~Date(){}

void Date::setDate(int month, int day, int year){
    this->month = month;
    this->day = day;
    this->year = year;
}
void Date::displayDate() const{
    cout << month << "/" << day << "/" << year << endl;
}