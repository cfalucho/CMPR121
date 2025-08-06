#include <iostream>
#include <string>
#include "Grad.h"

Grad::Grad(int ID, string name, int units, string degree){
    this->ID = ID;
    this->name = name;
    this->units  = units;
    this->degree = degree;
}
Grad::~Grad(){

}
void Grad::displayRecord(){
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Units: " << units << endl;
    cout << "Degree: " << degree << endl;
};



