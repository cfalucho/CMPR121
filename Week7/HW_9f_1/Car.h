#include <iostream>
#include <string>
using namespace std;

class Car{
        private:
            string model;
            int year;
            static int carCount;
        public:
            Car();
            Car(string, int);
            ~Car();
            void setCar(string, int);
            int getCount();
            void displayCar();
            friend bool areSame(Car&, Car&);
};