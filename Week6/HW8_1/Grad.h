#include <iostream>
#include <string>
#include "Student.h"
using namespace std;    

class Grad: public Student{
        protected:
            string degree;

        public:
            Grad(int, string, int, string);
            ~Grad();
            virtual void displayRecord();
};