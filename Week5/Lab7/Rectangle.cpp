#include <iostream>
#include <string>
#include "Rectangle.h"


Rectangle::Rectangle(){
     this->width = 0;
     this->length = 0;
}

Rectangle::~Rectangle(){

}
void Rectangle::setWidth(double width){
    this->width = width;
}
void Rectangle::setLength(double length){
    this->length = length;
}
double Rectangle::getWidth() const{
    return width;
}
double Rectangle::getLength() const{
    return length;
}
void Rectangle::showArea() const{
    cout << width * length << " square feet.";
}
