#include <iostream>

using namespace std;

int gcd(int, int);

int main(){

    int num1 = 0;
    int num2 = 0;
    int result = 0;

    cout << "Enter two positive numbers and I will find the largest divisor for it.\n";
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    result = gcd(num1, num2);
    cout << endl;
    cout << "The greatest common divosor of " << num1 << " and " << num2 << " is " 
            << result << "." << endl;
    return 0;
}


int gcd(int x, int y){

    // base case
    // GCD of x and y is y 
    // if x and y = zero
    if (x % y == 0)
    {
        return y;
    }
    else{
        return gcd (y, x % y);
    }
}