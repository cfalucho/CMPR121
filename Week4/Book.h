#include <iostream>
#include <string>
#include "Date.h"

class Book{
    private:
        string title;
        float price;
        Date date;
    public:
        // Default constructor
        Book();

        // Overload constructor
        Book(string bookTitle, float bookPrice, int month, int day, int year);

        // Destructor
        ~Book();

        void setTitle(string bookTitle);
        void setPrice(float bookPrice);
        string getTitle();
        float getPrice() const;
        void displayBook() const;
};