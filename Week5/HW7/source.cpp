#include <iostream>
#include "Date.h"

using namespace std;


int main(){

    int day = 0;
    int month= 0;
    int year = 0;

    Date today(7, 15, 2025);
    Date payDay;

    cout << "Enter the date of pay day.\n";
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    cout << "Year: ";
    cin >> year;
    cout << endl;

    payDay.setDate(month, day, year);

    cout << "Today's date is: ";
    today.displayDate();
    
    cout << "Pay day is : ";
    payDay.displayDate();
    
    payDay.addDays(7);
    cout << "Next week's pay day is ";
    payDay.displayDate();

    return 0;
}