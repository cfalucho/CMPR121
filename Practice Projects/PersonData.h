#include <iostream>

using namespace std;

class PersonData{
        private:
            string lastName;
            string firstName;
            string address;
            string city;
            string state;
            string zipCode;
            string phoneNumber;
        
        public:
            // Default Constructor
            PersonData();

            // Overloaded Constructor
            PersonData(string, string, string, string, string, string, string);
            ~PersonData();
            void setlastName(string);
            void setfirstName(string);
            void setAddress(string);
            void setCity(string);
            void setState(string);
            void setZipCode(string);
            void setPhoneNumber(string);
            string getlastName() const;
            string getfirstname() const;
            string getAddress() const;
            string getCity() const;
            string getState() const;
            string getZipCode() const;
            string getPhoneNumber() const;
};