#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class UnderGrad: public Student{
        protected:
            string level;

        public:
            UnderGrad(int, string, int, string);
            ~UnderGrad();
            virtual void displayRecord();
};