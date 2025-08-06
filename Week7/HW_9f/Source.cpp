#include <iostream>
#include <string>
#include "Dog.h"
using namespace  std;

int main(){

    // Declare objectS for myDog and yourDog 
    // pass values for each object to the constructor
    Dog myDog("Spot", 5.5, 3);
    Dog yourDog("Jack", 10.5, 3);

    if (myDog >= 2)
    {
        cout << "The dog is at least 2 years old.";
    }else{
        cout << "Dog is NOT at least 2 years old.";
    }
    cout << endl << endl;

    if (myDog < yourDog)
    {
        cout << "Your dog weighs more than mine.";
    }
    else{
        cout << "Your dog weighs less than mine.";
    }
    cout << endl << endl;

    if (myDog == yourDog)
    {
        cout << "Dogs have the same name.";
    }else{
        cout << "Dogs have different name.";
    }
    cout << endl << endl;

    cout << yourDog << endl;

    return 0;
}

