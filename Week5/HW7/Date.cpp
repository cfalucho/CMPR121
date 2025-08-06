#include <iostream>
#include <string>
#include "Date.h"

Date::Date(){
    this->month = 0;
    this->day = 0;
    this->year = 0;
}
Date::Date(int month, int day, int year){
    this->month = month;
    this->day = day;
    this->year = year;
}
Date::~Date(){

}

void Date::setDate(int month, int day, int year){
    this->month = month;
    this->day = day;
    this->year = year;
}
void Date::addDays(int numDays){
    day += numDays;
}
void Date::displayDate()const{
    cout << month << "/" << day << "/" << year << endl;
}