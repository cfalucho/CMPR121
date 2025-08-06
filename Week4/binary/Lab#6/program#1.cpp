#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    fstream dataFile;
    double number = 17.816392;

    dataFile.open("values.txt", ios::out);
    dataFile << number << endl;
    dataFile << setprecision(2) << showpoint << fixed;
    dataFile << number;
    cout << "Data has been written to file.\n";

    return 0;
}