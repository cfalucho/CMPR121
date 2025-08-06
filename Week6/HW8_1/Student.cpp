#include <iostream>
#include <string>
#include "Student.h"


Student::Student(){
    ID = 0;
    name = "";
    units = 0;
}
Student::Student(int ID, string name, int units){
    this->ID = ID;
    this->name = name;
    this->units = units;
}
Student::~Student(){

}
void Student::setID(int ID){
    this->ID = ID;
}
void Student::setName(string name){
    this->name = name;
}
void Student::setUnits(int units){
    this->units = units;
}
void Student::displayRecord(){
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Units: " << units << endl;
}

