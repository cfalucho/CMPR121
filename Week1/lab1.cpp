// =======================
// Included: Lab 1
// =======================
// Lab 1
// =======================
// Christian Falucho
// CMPR 121
// =======================
#include <iostream>
#include <iomanip>
using namespace std;
/*================ FUNCTION PROTOTYPES ==================*/
double getBalance();
double getDeposit();
double calcNewBalance(double, double);
void displayBalance(double, double);
/*================ FUNCTION PROTOTYPES ==================*/
/*
===========================================================
=== MAIN FUNCTION BEGINS ===
===========================================================
*/
int main () {
double balance = 0.0;
double deposit = 0.0;
double newBalance = 0.0;
balance = getBalance();
deposit = getDeposit();
newBalance = calcNewBalance(balance, deposit);
displayBalance(deposit, newBalance);

return 0;
}

/*
===========================================================
=== MAIN FUNCTION ENDS ===
===========================================================
*/
/*
===========================================================
=== HELPER FUNCTION BEGINS ===
===========================================================
*/
/*
Function asking user to input a balance and will return the
value to main
*/
double getBalance(){
double bankBalance = 0.0;
cout << "Enter your bank balance:" << setw(3) << " ";
cin >> bankBalance;
cout << endl;
return bankBalance;
}
/*
Function asking user to input a deposit and will return the
value to main.
*/
double getDeposit(){
double depositAmt = 0.0;
cout << "Enter the deposit amount:" << setw(3) << " ";
cin >> depositAmt;
cout << endl;
return depositAmt;
}
/*
Function to calculate the balance by adding the current
balance and deposit. Then return the value to main.
*/
double calcNewBalance(double balance, double deposit){
double newBalance = 0.0;
newBalance = balance + deposit;
return newBalance;
}

//Function to display the final balance
/*
*/
void displayBalance(double deposit, double newBalance){

    cout << "With a deposit of $" << deposit << " your new balance is $" << newBalance << "." << endl;
}