#include <iostream>
#include <iomanip>

using namespace std;

/*================ FUNCTION PROTOTYPES ===================*/
double getSalesAmt();
double calcCommission(double);
double calcPay(double, double);
void displayPay(double, double, double, double);
void runAgain();
/*================ FUNCTION PROTOTYPES ===================*/

/*=================================================================
=                       MAIN FUNCTION BEGINS                      =
=================================================================*/
int main () {

    // Variable that has the base pay value
    double basePay = 2500;     

    // Variables to store the values from functions
    double salesAmt = 0.0;
    double commissionAmt = 0.0;
    double totalPay = 0.0;

    // Call functions, then pass arguments and store the values into variables
    salesAmt = getSalesAmt();
    commissionAmt = calcCommission(salesAmt);
    totalPay = calcPay(commissionAmt, basePay);
    
    // Call display() function, pass the following arguments
    // Arguments to pass - salesAmt, commissionAmt, basePay, totalPay
    displayPay(salesAmt, commissionAmt, basePay, totalPay);

    // Call runAgain() to ask user to run the program again
    runAgain();
}
/*=================================================================
=                       MAIN FUNCTION ENDS                        =
=================================================================*/

/*=================================================================
=                        HELPER FUNCTIONS                         =
=================================================================*/

/*======================= getSales() begins  ======================                                                                                                   
Desc: 
    The function asks for the user's input and stores the input 
    into variable salesAmount and returns the value.

Input:
    No input to put into the function. Rather it asks for the 
    user's input.

Output: 
    A double value that the user has inputed and would be return to 
    main().
=================================================================*/
double getSalesAmt(){

    double salesAmount = 0.0;
    
    cout << "Enter monthly sales amount: ";
    cin >> salesAmount;
    cout << endl;

    return salesAmount;
}
/*======================= getSales() ends  ========================*/              

/*================= calcCommission() begins  ======================                                                                                                   
Desc: 
    The function uses an if-else statement and based on the statement,
    uses that commission's % to calculate the sales amount.

Input:
    Takes in the value of sales amount.

Output: 
    Returns the value of commission to main. 
=================================================================*/
double calcCommission(double salesAmount){

    double commissionRate = 0.0;
    double commissionAmt = 0.0;

    if (salesAmount > 50000)
    {
        commissionRate = 0.02;
        commissionAmt = salesAmount * commissionRate;
        return commissionAmt;
    }
    else if (salesAmount >= 25000 && salesAmount <= 50000)
    {
        commissionRate = 0.015;
        commissionAmt = salesAmount * commissionRate;
        return commissionAmt;
    }
    return commissionAmt;
}
/*======================= calcCommission() ends  =================*/              

/*================= calcPay() begins  =============================                                                                                                   
Desc: 
    Calculates the total monthly pay by adding the base salary and 
    commission rate. 

Input:
    Takes in two values, the sales amount and commission rate.

Output: 
    Return the total pay value to main.
=================================================================*/
double calcPay(double commission, double basePay){
    
    double totalPay = 0.0;

    totalPay = basePay + commission;

    return totalPay;
}
/*================= calcPay() ends  ==============================*/                                                                                                  

/*================= displayPay() begins  ==========================                                                                                                  
Desc:                                                   
    Calculates the total monthly pay by adding the base salary and 
    commission rate. 

Input:
    Takes in two values, the sales amount and commission rate.

Output: 
    Return the total pay value to main.
=================================================================*/
void displayPay(double salesAmt, double commissionAmt, double basePay, double totalPay){
    
    cout << setprecision(2) << fixed << showpoint;
    cout << "Monthly Sales: " << setw(3) << "$ " << setw(4) << salesAmt << endl;
    cout << "Commission: " << setw(6) << "$ " << setw(9) << commissionAmt << endl;
    cout << "Base Pay: " << setw(8) << "$ " << setw(9) << basePay << endl;
    cout << "Total Pay: " << setw(7) << "$ " << setw(9) << totalPay << endl << endl;
}
/*================= displayPay() begins  =========================*/                                                                                                 

/*================= runAgain() begins  ============================                                                                                                 
Desc:                                                   
    Asks user if they want to run the program again. If not, the 
    program ends.

Input:
    N/A

Output: 
    Asks a question to user
=================================================================*/
void runAgain(){

    string userInput;

    cout << "Do it again? (Y/N) ";
    cin >> userInput;

    if (userInput == "y" || userInput == "Y")
    {
        main();
    }
    else if (userInput == "n" || userInput == "N")
    {
        cout << "Program ending...";
    }
}
/*================= runAgain() ends  =============================*/                                                                                                 

/*=================================================================
=                     HELPER FUNCTIONS ENDS                       =
=================================================================*/
