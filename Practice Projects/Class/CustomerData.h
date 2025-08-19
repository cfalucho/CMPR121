#include <iostream>
#ifndef PersonData_H
#define PersonData_H
#include "PersonData.h"

using namespace std;

// class CustomerData derives from PersonData
class CustomerData: public PersonData{
            private: 
                int customerNumber;
                bool mailingList;
            public: 
                CustomerData();
                CustomerData(int, bool);
                ~CustomerData();
                void setCustomerNumber(int);
                void setMailingList(bool);
                int getCustomerNumber() const;
                bool getMailingList() const;
                string getMailingListasString() const;
};

#endif
