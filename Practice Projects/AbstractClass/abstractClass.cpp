#include <iostream>

using namespace std;

class BaseShape {
    protected:
        double area;
    public:
        double getArea() const {
            return area;
        }
        // Pure Virtual Function
        virtual void calcArea()  = 0;
};

// Derived Class - Circle
class Circle : public BaseShape {
    private:
        long int centerX; 
        long int centerY;
        double radius;
    public:
        Circle(int centerX, int centerY, double radius) {
            this->centerX = centerX;
            this->centerY = centerY;
            this->radius = radius;
            calcArea();
        };
        long getCenterX() const {
            return centerX;
        }
        long getCenterY() const {
            return centerY;
        }  
        // Calculate area of the circle
        void calcArea() override {
            area = 3.14159 * radius * radius;
        }

};

// Define class Rectange
// Inherit from BaseShape
class Rectangle : public BaseShape {
    private:
        long int width;
        long int length;

    public:
        Rectangle(int width, int length){
            this->width = width;
            this->length = length;
            calcArea();
        }
        int getWidth() const {
            return width;
        }
        int getLenngth() const {
            return length;
        }
        void calcArea() override {
            area = length * width;
        }
};


int main (){

    // BaseShape base1(11.11, 22.11);
    
    Circle circle1 (23, 45, 23);
    Circle circle2 (12, 23 ,424);


    Rectangle rectangle1(45, 66);

    cout << circle1.getArea() << "\n";
    cout << circle1.getCenterX() << "\n";
    cout << circle1.getCenterY() << "\n";
    cout << "\n\n";
    cout << rectangle1.getArea();


    return 0;
}