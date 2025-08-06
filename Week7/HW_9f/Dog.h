#include <iostream>
#include <string>
using namespace std;

class Dog {
        private:
            string name;
            float weight;
            int age;
        
        public:
            Dog(string name, float weight, int age){
                this->name = name;
                this->weight = weight;
                this->age = age;
            };
            ~Dog(){};
            void displayDog(){
                cout << "Name: " << name << endl;
                cout << "Weight: " << weight << endl;
                cout << "Age: " << age << endl;
            };
            bool operator>=(int age){
                return (this->age >= age) ? true : false;
            }; 
            bool operator<(Dog& dog) const {
                return (this->weight < dog.weight) ? true : false;
            };
            bool operator==(Dog& dog) const{
                return (this->name == dog.name) ? true : false;
            };
            friend ostream & operator<<(ostream& stream, Dog& dog){
                stream << "Name: " << dog.name << endl
                        << "Weight: " << dog.weight << " pounds." << endl
                        << "Age: " << dog.age << " years old." << endl;
                return stream;
            };
};