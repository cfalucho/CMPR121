#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string ISBN;
        int year;
        double price;
    public:
        Book(string, int, double);
        ~Book();
        void displayBook() const;
};