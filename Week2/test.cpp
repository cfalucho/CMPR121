#include <iostream>

using namespace std;

struct Vehicle
{
    int id;
    int year;
    string model;
};

void displayCar(Vehicle&);


int main(){

    double values_double[5];
    int values[5] = {1, 2, 3, 4, 5};
    int number = 5;
    double* doublePtr = NULL;
    int* ptr = &number;

    Vehicle myCar;

    myCar.id = 12345;
    myCar.year = 2005;
    myCar.model = "Ford";



    for (int i = 0; i < 5; i++)
    {
        values_double[i] = values[i];
        doublePtr = &values_double[i];
    }

    number = 44;
    cout << *ptr << endl;
    
    displayCar(myCar);


    return 0;
}

void displayCar(Vehicle& car){
    cout << car.id << endl;
    cout << car.year << endl;
    cout << car.model << endl;
    
}