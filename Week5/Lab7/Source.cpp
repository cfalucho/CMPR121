#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

int main(){

    double width = 0;
    double length = 0;
    Rectangle tennisCourt;

    cout << "Enter width, in feet, of the tennis court: ";
    cin >> width;
    tennisCourt.setWidth(width);
    cout << "Enter length, in feet, of the tennis court: ";
    cin >> length;
    tennisCourt.setLength(length);

    cout << "The width of the court is " << tennisCourt.getWidth() << " feet." << endl;
    cout << "The width of the court is " << tennisCourt.getLength() << " feet." << endl;
    cout << "The area of the court is ";
    tennisCourt.showArea();

    return 0;
}