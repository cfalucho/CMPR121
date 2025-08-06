#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

int main()
{
	Book b1("0-12345-9", 1990, 12.50);
	Book b2("0-54321-9", 2001, 7.75);
	Book b3;
	double avg;

	cout << "Here is book #1:\n";
	b1.displayBook();

    cout << endl;
	cout << "Here is book #2:\n";
	b2.displayBook();

	cout << "There are " << b1.getCount() << " books.\n\n";
	// ------------------------------
	if (b1 > b2) 		  // Use this overloaded function:  bool operator>();
		cout << "Book #1 has a higher price.\n\n";
	else
		cout << "Book #1 does not have a higher price.\n\n";
	// ------------------------------
	
	if (b1 == b2)          // Use this overloaded function: bool operator==();
		cout << "Same price.\n\n";
	else
		cout << "Not the same price.\n\n";
	// ------------------------------
	if (b2 > 10.00)        // Use this overloaded function:  bool operator>();
		cout << "The price is more than $10.00.\n\n";
	else
		cout << "The price is not more than $10.00.\n\n";
	// ---------------
	avg = (b1 + b2) / 2.0;  // Use this overloaded function:  bool operator+();

	cout << "The average book price is " << avg << ".\n\n";
	// ---------------
	if (b1 < 2000)          // Use this overloaded function:  bool operator<();
		cout << "The book was published before 2000.\n\n";
	else
		cout << "The book was not published before 2000.\n\n";
	// ---------------
	cout << b1;             // Use this:  friend ostream& operator<<();
	// ---------------
	cout << "\nEnter Book #3 information.\n";
	cin >> b3; 		                            // Use this:  friend istream& operator>>();
					                            // (This function is given to you below).

	cout << "\nHere is what you entered for Book #3:\n";
	cout << b3; 		    // Use this:  friend ostream& operator<<();

	return 0;
}
