#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main (){
    Student s1;
    Student s2(100, "Tom P. Lee", 12);
    
    cout << "Student #1 \n";
    s1.displayRecord();
    cout << endl;

    cout << "Student #2 \n";
    s2.displayRecord();
    cout << endl << endl;
    
    // Calling Student Object's set function
    s1.setID(101);
    s1.setName("Christian Falucho");
    s1.setUnits(15);
    cout << "Student #1 after the set functions: \n";
    cout << endl;
    s1.displayRecord();
}