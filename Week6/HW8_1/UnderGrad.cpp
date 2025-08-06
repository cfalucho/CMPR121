#include <iostream>
#include <string>
#include "UnderGrad.h"

UnderGrad::UnderGrad(int ID, string name, int units, string level){
    this->ID = ID;
    this->name = name;
    this->units = units;
    this->level = level;
}
UnderGrad::~UnderGrad(){

}
void UnderGrad::displayRecord(){
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Units: " << units << endl;
    cout << "Class: " << level << endl;
}