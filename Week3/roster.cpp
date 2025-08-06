#include <iostream>

using namespace std;


/*================ GLOBAL VARIABLES ===================*/

enum roster { TOM = 1, SHARON = 2, BILL = 3, TERESA = 4, JOHN = 5};

/*================ GLOBAL VARIABLES ===================*/


/*
===========================================================
===                MAIN FUNCTION BEGINS                 ===
===========================================================
*/

int main(){

    int name;
    char answer = 'n';

    cout << "1.) = Tom" << endl;;
    cout << "2.) = Sharon" << endl;    
    cout << "3.) = Bill" << endl;
    cout << "4.) = Teresa" << endl;
    cout << "5.) = John" << endl;


    do
    {
        cout << endl;
        cout << "Whose birthday do you want to know?  ";
        cin >> name;

        cout << endl;

        switch (name)
        {
        case TOM:
            cout << "Tom's birthday is January 3.";
            break;
        
        case SHARON:
            cout << "Sharon's birthday is April 22.";
            break;    
    
        case BILL:
            cout << "Bill's birthday is May 19.";
            break;     
            
        case TERESA:
            cout << "Teresa's birthday is July 2.";
            break; 
            
        case JOHN:
            cout << "John's birthday is June 17.";
            break; 
        default:
            cout << "Invalid selection.";
            break;
        }

        cout << endl << endl;
        cout << "Do you want check another name? (Y/N) ";
        cin >> answer;
    } while (tolower(answer) == 'y');
    
    return 0;
}

/*
===========================================================
===                MAIN FUNCTION ENDS                   ===
===========================================================
*/


