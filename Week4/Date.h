#include <iostream>
#include <string>
using namespace std;

class Date{
    private:
        int month;
        int day;
        int year;
    public:
        Date(/* args */);
        ~Date();
        void setDate(int month, int day, int year);
        void displayDate() const;
};

