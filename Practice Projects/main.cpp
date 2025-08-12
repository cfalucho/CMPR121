#include <iostream>
#include "CustomerData.h"

using namespace std;

int main (){
    
    // Create an object Person
    PersonData person1;
    PersonData person2 ("Doe", "John", "111 West lane", "Stockton", "CA", "91766", "2094811088");

    // Create a object Customer
    // class CustomerData derives from class Person
    CustomerData customer1;
    CustomerData customer2(9999, false);



    // Person1 set member functions
    person1.setfirstName("Christian");
    person1.setlastName("Falucho");
    person1.setAddress("3063 Chapman Ave");
    person1.setCity("Orange");
    person1.setState("CA");
    person1.setZipCode("92868");
    person1.setPhoneNumber("3108492781");

    // Person2
    cout << person2.getCity() << endl;
    
    
    // Customer1 Information
    customer1.setfirstName("John");
    customer1.setlastName("Doe");
    customer1.setCustomerNumber(12345);
    customer1.setMailingList(false);

    // Customer2 Information
    cout << customer2.getMailingListasString() << endl;
    cout << customer2.getCustomerNumber();
    




    


    return 0;
}