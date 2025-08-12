#include <iostream>
#include "CustomerData.h"


CustomerData::CustomerData(){
        customerNumber = 0;
        mailingList = false;
}
CustomerData::CustomerData(int customerNumber, bool mailingList){
        this->customerNumber = customerNumber;
        this->mailingList = mailingList;
}
CustomerData::~CustomerData(){}
void CustomerData::setCustomerNumber(int customerNumber){
        this->customerNumber = customerNumber;
}
void CustomerData::setMailingList(bool mailingList){
        // this->mailingList = mailingList;
}
int CustomerData::getCustomerNumber() const{
        return customerNumber;
}
bool CustomerData::getMailingList() const{
        return mailingList;
}

string CustomerData::getMailingListasString() const{
    return mailingList ? "true" : "false";
}


