#include <iostream>
#include <string>
#include "President.h"

using namespace std;

const int SIZE = 3;
int main(){

    President presidents[SIZE];
    // President presidents;
    int number = 0;
    string name = "\n";
    string quote = "\n";
    
    cout << "Enter information about " << SIZE << " U.S. presidents." << endl << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Number: ";
        cin >> number;
        presidents[i].setNumber(number);

        cin.ignore();

        cout << "Name: ";
        getline(cin, name);
        presidents[i].setName(name);
        
        cout << "Quote: ";
        getline(cin, quote);
        presidents[i].setQuote(quote);
    }
    cout << endl << endl;

    for (int i = 0; i < SIZE; i++)
    {
        presidents[i].displayPresident();
        cout << endl << endl;
    }
}