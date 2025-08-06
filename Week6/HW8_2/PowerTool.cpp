#include <iostream>
#include <string>
#include <iomanip>
#include "PowerTool.h"

PowerTool::PowerTool(){
    motorType = "";
    cordless = '\0';
}
PowerTool::PowerTool(string motorType, char cordless, int ID, string name, double price){
    this->motorType = motorType;
    this->cordless = cordless;
    this->ID = ID;
    this->name = name;
    this->price = price;
}
PowerTool::~PowerTool(){

};
void PowerTool::setPowerTool(string motorType, char cordless, int ID, string name, double price){
    this->motorType = motorType;
    this->cordless = cordless;
    this->ID = ID;
    this->name = name;
    this->price = price;
}
void PowerTool::showTool() const{
    string cordlessAns;
    cout << fixed << setprecision(2) << showpoint;
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    if (cordless == 'n')
    {
        cordlessAns = "No";
    }
    else if(cordless == 'y'){
        cordlessAns = "Yes";
    }
    cout << "Cordless: " << cordlessAns << endl;
    cout << "Motor Type: " << motorType << endl;
    cout << "Price: $" << price << endl;
}