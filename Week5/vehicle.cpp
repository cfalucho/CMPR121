#include <iostream>
#include <string>

#include "Vehicle.h"

Vehicle::Vehicle(){
    ID = 0;
    model = "\0";
    wholeSale = 0.0;
}

Vehicle::Vehicle(int ID, string model, float wholeSale){

    this->ID = ID;
    this->model = model;
    this->wholeSale = wholeSale;
}

Vehicle::~Vehicle(){

}

void Vehicle::setID(int ID){
    this->ID = ID;
}

void Vehicle::setModel(string model){
    this->model = model;
}

void Vehicle::setPrice(float wholeSale){
    this->wholeSale = wholeSale;
}

int Vehicle::getID() const{
    return ID;
}

string Vehicle::getModel()const{
    return model;
}

float Vehicle::getPrice()const{
    return wholeSale;
}

void Vehicle::showVehicle()const{
    cout << "ID: " << ID << endl;
    cout << "Model: " << model << endl;
    cout << "Price: $" << wholeSale << endl;
}
