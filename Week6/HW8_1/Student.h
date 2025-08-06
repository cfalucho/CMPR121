#include <iostream>
#include <string>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student{
        protected:
            int ID;
            int units;
            string name;
        public:
            Student();
            Student(int, string, int);
            ~Student();
            void setID(int);
            void setName(string);
            void setUnits(int);
            virtual void displayRecord();
};
#endif