#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
void getTemps(double&);
double calcAvg(double, double, double);
void displayAvg(double&, double&, double&, double);

int main (){

    double temp_1 = 0.0;
    double temp_2 = 0.0;
    double temp_3 = 0.0;

    double totalAvg = 0.0;
    
    getTemps(temp_1);
    getTemps(temp_2);
    getTemps(temp_3);

    totalAvg = calcAvg(temp_1, temp_2, temp_3);
    displayAvg(temp_1, temp_2, temp_3, totalAvg);

    return 0;   
}


void getTemps(double& temp){

    cout << "Enter a temperature: ";
    cin >> temp;
    
    cout << endl;
}
double calcAvg(double temp_1, double temp_2, double temp_3){
    
    double totalAvg = 0.0;

    totalAvg = (temp_1 + temp_2 + temp_3) / 3;

    return totalAvg;
}


void displayAvg(double& temp_1, double& temp_2, double& temp_3, double totalAvg){
    
    cout << "Enter temperatures of 3 cities." << endl;
    
    cout << setprecision(1) << fixed << showpoint;

    cout << "#1: " << setw(5) << temp_1 << endl;
    cout << "#2: " << setw(5) << temp_2 << endl;
    cout << "#3: " << setw(5) << temp_3 << endl << endl;

    cout << "The average temperature is " << totalAvg << " degrees." << endl;
}


