#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    
    const int NUM_EMPLOYEES = 5;
    vector<int> hours(NUM_EMPLOYEES);
    vector<double> wage(NUM_EMPLOYEES);

    cout << "Enter hours worked and hourly wage of each employee:\n\n";
    for (int i = 0; i < hours.size() / 2; i++)
    {
        int hrValue, wageValue;
        cout << "Hours for Employee #" << i + 1 << ": ";
        cin >> hrValue;
        hours.insert(hours.begin() + i, hrValue);

        cout << "Wage for Employee #" << i + 1 << ": ";
        cin >> wageValue;
        wage.insert(wage.begin() + i, wageValue);
        
    }
    
    system("cls");
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Gross pay for each employee:\n\n";

    for (int i = 0; i < hours.size() / 2; i++)
    {
        cout << "Employee #" << i + 1 << setw(10) << "$ " << hours[i] * wage[i] << endl;
    }
    
    cout << "Employee #1 hours = " << hours.front();
    cout << endl;
    cout << "Employee #5 hours = " << hours.at(4);



    return 0;
}