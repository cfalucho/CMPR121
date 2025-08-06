#include <iostream>
#include <string>

using namespace std;

class Rectangle{
        private:
            double width;
            double length;
        public:
            Rectangle();
            ~Rectangle();
            void setWidth(double width);
            void setLength(double length);
            double getWidth() const;
            double getLength() const;
            void showArea() const;
};