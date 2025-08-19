#include <iostream>
using namespace std;

// Base Ship Class
class Ship {
        protected:
            string shipName = "\0";
            string yearBuilt = "\0";
    
        public:
            Ship(){};                                   // Default constructor
            
            Ship(string shipName, string yearBuilt){
                this->shipName = shipName;
                this->yearBuilt = yearBuilt;
            };

            Ship(string name) : shipName(name){
                shipName = name;
            }

            ~Ship(){};                                  // Destructor
            
            // Setters
            void setName(string name) 
            { 
                this->shipName = name;
            }
            void setYearBuilt(string yrBuilt)
            { 
                this->yearBuilt = yrBuilt;
            }       

            // Getters
            string getName()const{
                return shipName;
            }
            string getYearBuilt()const{
                return yearBuilt;
            }

            virtual void print(){
                cout << "Ship name: " << shipName << "\n";
                cout << "Year built: " << yearBuilt << "\n";
            }
};

// CruiseShip is a Ship
// Derived class from Ship
class CruiseShip : public Ship{
        private: 
            int maxNumberOfPassengers = 0;

        public:
            CruiseShip(){}                                      // Default constructor
            CruiseShip(int maxNumberOfPassengers){
                this->maxNumberOfPassengers = maxNumberOfPassengers;
            }

            // Redefining Base Class Function
            CruiseShip(string name, int maxNumberOfPassengers) : Ship(name) {
                this->maxNumberOfPassengers = maxNumberOfPassengers;
            }
            ~CruiseShip(){}                                     // Destructor
            
            // Setter
            void setMaxNumberOfPassengers(int number){
                this->maxNumberOfPassengers = number;
            } 

            // Getter
            int getMaxNumberOfPassengers()const{
                return maxNumberOfPassengers;
            }

            // Display the ship's name and the maximum number of passengers
            void print() override {
                cout << "Ship name: " << shipName << "\n";
                cout << "Number of Passengers: " << maxNumberOfPassengers << "\n";
            }
};

// CargoShip is a Ship
// Derived class from Ship
class CargoShip : public Ship {
        private:
            int cargoCapacity = 0;

        public:
            CargoShip(){
                cargoCapacity = 0;
            }                                           // Default Constructor
            CargoShip(string name ,int cargoCapacity) : Ship(name){
                this->cargoCapacity = cargoCapacity;    
            }
            ~CargoShip(){}                              // Destructor

            // Setter
            void setCargoCapacity(int cargoCapacity){
                this->cargoCapacity = cargoCapacity ;
            }

            // Getter
            int getCargoCapacity()const {
                return cargoCapacity;
            }
            void print() override {
                cout << "Ship name: " << shipName << "\n";
                cout << "Number of Passengers: " << cargoCapacity << "\n";
            }
};

int main (){

    // Create an array of ship pointers
    const int numOfShips = 10;
    Ship* ships[numOfShips] = {
        new Ship("AlphaShip", "1945"),
        new CruiseShip("BetaShip",343),
        new CargoShip("CharlieShip",53000),
        new CruiseShip("Delta", 2322),
        new CargoShip("Elden", 102323),
        new Ship("FrankShip", "2025"),
        new CruiseShip("GarminShip", 23233),
        new CruiseShip("HulkShip", 90000),
        new CargoShip("IrvineShip", 65656),
        new CruiseShip("JRShip", 7777),

    };

    
    
    
    for(Ship* ship : ships){
        ship->print();
    }

    for(Ship* s : ships){
        delete s;
    }





    return 0;
}