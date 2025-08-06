#include <iostream>
#include <string>
#include "Grad.h"
#include "UnderGrad.h"


using namespace std;

int main(){

    UnderGrad undergrad(100, "Tom P. Lee", 9, "Freshman");
    Grad grad(101, "Jim Jones", 12, "PHD");
    
    undergrad.displayRecord();
    cout << endl;
    grad.displayRecord();
    cout << endl;
    grad.setUnits(15);
    grad.displayRecord();

    return 0;
}