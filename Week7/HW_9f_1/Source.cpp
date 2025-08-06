#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main(){
    Car myCar;
    Car yourCar("Toyota", 2025);

    cout << "My Car\n";
    myCar.displayCar();
    cout << endl;

    cout << "Your Car\n";
    yourCar.displayCar();
    cout << endl;

    myCar.setCar("Ford", 2002);
    
    cout << "My Car\n";
    myCar.displayCar();
    cout << endl;
    
    if (areSame(myCar, yourCar))
    {
        cout << "The two cars are the same.\n";
    }else{
        cout << "The two cars are not the same.\n";
    }

    cout << endl;
    cout << myCar.getCount() << " have been declared.\n";

    return 0;
}