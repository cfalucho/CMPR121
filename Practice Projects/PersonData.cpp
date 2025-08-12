#include <iostream>
#include "PersonData.h"

PersonData::PersonData(){
                lastName = "\0";
                firstName = "\0";
                address = "\0";
                city = "\0";
                state = "\0";
                zipCode = "\0";
                phoneNumber = "\0";
}
PersonData::PersonData(string lastName, string firstName, string address, string city, 
                       string state, string zipCode, string phoneNumber){
                this->lastName = lastName;
                this->firstName = firstName;
                this->address = address;
                this->city = city;
                this->state = state;
                this->zipCode = zipCode;
                this->phoneNumber = phoneNumber;
}
PersonData::~PersonData(){};
void PersonData::setlastName(string lastName){
                this->lastName = lastName;
}
void PersonData::setfirstName(string firstName){
                this->firstName = firstName;
}
void PersonData::setAddress(string address){
                this->address = address;
}
void PersonData::setCity(string city){
                this->city = city;
}
void PersonData::setState(string state){
                this->state = state;
}
void PersonData::setZipCode(string zipCode){
                this->zipCode = zipCode;
}
void PersonData::setPhoneNumber(string phoneNumber){
                this->phoneNumber = phoneNumber;
}
string PersonData::getlastName() const{
                return lastName;
}           
string PersonData::getfirstname() const{
                return firstName;
}
string PersonData::getAddress() const{
                return address;
}
string PersonData::getCity() const{
                return city;
}
string PersonData::getState() const{
                return state;
}
string PersonData::getZipCode() const{
                return zipCode;
}
string PersonData::getPhoneNumber() const{
                return phoneNumber;
}