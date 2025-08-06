#include <iostream>
using namespace std;

template <class W, class L>
W calcArea(W, L);
template <class T, class L>
void getDimensions(T&, L&);

int main(){

    int side1;
    int side2;
    float width;
    float length;

    cout << "Enter the intger dimensions of a rectangle: " << endl;
    getDimensions(side1, side2);
    cout << "The area equals: " << calcArea(side1, side2);
    cout << endl << endl;
    
    cout << "Enter the float dimensions of a rectangle: " << endl;
    getDimensions(width, length);
    cout << "The area equals: " << calcArea(width, length);
    cout << endl << endl;

    return 0;
}

template <class W, class L>
W calcArea(W integerOne, L integerTwo){
    return integerOne * integerTwo;
};

template <class T, class L>
void getDimensions(T& dimOne, L& dimTwo){
    cout << "Enter the first dimension: ";
    cin >> dimOne;
    cout << "Enter the second dimension: ";
    cin >> dimTwo;
}