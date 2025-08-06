#include <iostream>
#include <string>
#include "Tool.h"
#include "PowerTool.h"

using namespace std;

int main(){

    unsigned int ID;
    string name;
    char cordless = towlower(cordless);
    string motorType;
    double price;

    // Declare two objects of PowerTool type: t1 and t2
    PowerTool t1("LD 120 20 V", 'Y', 12345, "Black + Decker drill", 59.99);
    PowerTool t2;
    
    cout << endl;
    cout << "Tool #1: \n";
    t1.showTool();
    cout << endl;
    cout << "Tool #2: \n";
    t2.showTool();
    cout << endl;

      // Input information for the power tool
    cout << "Enter information about Tool #2: \n\n";
    cout << "ID: ";
    cin >> ID;
    cin.ignore();
    cout << "Name: ";
    getline(cin, name);
    cout << "Cordless (Y or N): ";
    cin >> cordless;
    cin.ignore();
    cout << "Motor Type: ";
    getline(cin, motorType);
    cout << "Price: $";
    cin >> price;
    
    cout << endl;
    cout << "Tool #2 (after the set funcion)\n\n";
    // Call the PowerTool member function 'setPowerTool'
    t2.setPowerTool(motorType, cordless, ID, name, price);
    // Show tool information
    t2.showTool(); 
    return 0;
}