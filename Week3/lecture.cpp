#include <iostream>
#include <ctime>

using namespace std;

long long int fib(int);

int main(){

    int number = 49;
    clock_t start;
    clock_t end;

    start = clock();

    cout << "fib(" << number << ") = " << fib(number) << endl;
    end = clock();

    cout << "Time = " <<  (end-start) / CLOCKS_PER_SEC  << " seconds.\n\n"; 


    return 0;
}

long long int fib(int number){

    // Base case to stop recursion
    if (number == 1 || number == 2)
    {
        return 1;
    }
    return fib(number - 1) + fib(number - 2);

    
}