#include <iostream>
#include <string>

using namespace std;

class Date{
    private:
            int month;
            int day;
            int year;
    public: 
            Date();
            Date(int month, int day, int year);
            ~Date();
            void setDate(int month, int day, int year);
            void addDays(int numDays);
            void displayDate() const;
};
