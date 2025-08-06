#include <iostream>
#include <string>
#include "President.h"


President::President(){
    number = 0;
    name = "\n";
    quote = "\n";
}
President::~President(){

}
void President::setNumber(int number){
    this->number = number;
}
void President::setName(string name){
    this->name = name;
}
void President::setQuote(string quote){
    this->quote = quote;
}
void President::displayPresident()const{    
    cout << name << ", " << number << "th president" << ", said:" << endl;
    cout << "\"" << quote << ".\"";  
}
