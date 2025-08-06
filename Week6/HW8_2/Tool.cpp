#include <iostream>
#include <string>
#include "Tool.h"

Tool::Tool(){
    ID = 0;
    name = "";
    price = 00.00;
}
Tool::Tool(int ID, string name, double price){
    this->ID = ID;
    this->name = name;
    this->price = price;

}
Tool::~Tool(){

}
void Tool::setTool(int ID, string name, double price){
    this->ID = ID;
    this->name = name;
    this->price = price;
}
double Tool::getPrice() const{
    return price;
}
void Tool::showTool() const{
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Price: $" << price << endl;
}
