#include <iostream>
#include <string>
#ifndef BOOK_H
#define BOOK_H
using namespace std;

class Book{
    private:
        string ISBN;
        int year;
        double price;
        static int bookCount;
    public:
        Book();
        Book(string, int, double);
        ~Book();
        int getCount();
        void displayBook() const;
        bool operator>(Book&) const;	               
	    bool operator==(Book&) const;	                
		bool operator>(double);	                        
	    double operator+(Book&);                        
	    bool operator<(int);                            
	    friend ostream& operator<<(ostream&, Book&);    
	    friend istream& operator>>(istream&, Book&);   

};
#endif