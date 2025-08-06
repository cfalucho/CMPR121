#include <iostream>
#include "Vehicle.h"

using namespace std;


int main (){

    int idNum;
    string model;
    float wholeSale;

    Vehicle v1;

    cout << "Vehicle #1:\n";

    Vehicle v2(2, "Lexus", 2345.6);

    v1.showVehicle();
    cout << endl << endl;


    cout << "Vehicle #2:\n";
    v2.showVehicle();
    cout << endl << endl;

    cout << "Enter Vehicle #1's information:\n";
    cout << "ID: ";
    cin >> idNum;
    cout << "Model: ";
    cin.ignore();
    getline(cin, model);
    cout << "Wholesale Price: ";
    cin >> wholeSale;

    system("clear");
    v1.setID(idNum);
    v1.setModel(model);
    v1.setPrice(wholeSale);

    v1.showVehicle();
    // cout << v1.getID() << endl;
    // cout << v1.getModel() << endl;
    // cout << v1.getPrice() << endl;


    cout << "\n\nVehicle #2's ID # is " << v2.getID() << ".";



    




    return 0;
}