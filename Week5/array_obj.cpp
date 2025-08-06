#include <iostream>
#include "Vehicle.h"
#include <iomanip>

using namespace std;

const int SIZE = 3;
int main(){

    Vehicle vehicles[SIZE];
    int ID;
    string model;
    float wholeSale;
    
    cout << "Enter " << SIZE << " vehicles: \n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << i + 1 << ";\n";
        cout << "ID: ";
        cin >> ID;
        vehicles[i].setID(ID);

        cin.ignore();
        
        cout << "Model: ";
        getline(cin, model);
        vehicles[i].setModel(model);

        cout << "Wholesale Price: ";
        cin >> wholeSale;
        vehicles[i].setPrice(wholeSale);
        cin.ignore();
    }


    cout << "Show the list of vehicles:\n\n";

    cout << "ID# " << setw(10) << "Model" << setw(10) << "Price" << endl << endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << vehicles[i].getID() << setw(13) << vehicles[i].getModel() << setw(13) << vehicles[i].getPrice() << endl;
    }
    

    return 0;
}