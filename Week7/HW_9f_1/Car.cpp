#include <iostream>
#include <string>
#include "Car.h"

Car::Car(){
    model = "\0";
    year = 0;
    carCount++;
}
Car::Car(string model, int year){
    this->model = model;
    this->year = year;
    carCount++;
}
Car::~Car(){}
void Car::setCar(string model, int year){
    this->model = model;
    this->year = year;
    
}
int Car::carCount = 0;
int Car::getCount(){
    return carCount;
}
void Car::displayCar(){
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}

bool areSame(Car& car1, Car& car2){
    return (car1.model == car2.model) && 
           (car1.year == car2.year);
}
