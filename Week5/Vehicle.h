#include <iostream>
#include <string>

using namespace std;

class Vehicle{
        private:
                int ID;
                string model;
                float wholeSale;
        public:
                Vehicle();
                Vehicle(int idNUm, string modelName, float wholeSalePrice);
                ~Vehicle();
                void setID(int);
                void setModel(string);
                void setPrice(float);
                int getID() const;
                string getModel() const;
                float getPrice() const;
                void showVehicle()const;
};      


