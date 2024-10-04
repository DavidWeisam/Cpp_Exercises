#include <iostream>
#include <cmath>

using namespace std;


class Shape {
    public:
        virtual double GetArea() const = 0;
        virtual double GetPerimeter() const = 0;
};

class Circle: public Shape {
    public:
        Circle(double radius):
            _radius(radius)
        {}

        double GetArea() const override  {
            return 3.14 * pow(_radius, 2);
        }

        double GetPerimeter() const override  {
            return 2 * 3.14 * _radius;
        }

    private:
        double _radius;
};


class Rectangle: public Shape {
    public:
        Rectangle(double len, double wid) :
            _length(len),
            _width(wid)
        {}

        double GetArea() const override  {
            return _length * _width;
        }

        double GetPerimeter() const override  {
            return (_length + _width) * 2;
        }

    private:
        double _length;
        double _width;
};

class Triangle: public Shape {
    public:
        Triangle(double side1, double side2, double side3) :
            _side1(side1),
            _side2(side2),
            _side3(side3)
        {}

        double GetArea() const override {
            double s = (_side1 + _side2 + _side3) / 2;
            return sqrt(s * (s - _side1) * (s - _side2) * (s - _side3));
        }

        double GetPerimeter() const override {
            return _side1 + _side2 + _side3;
        }

    private:
        double _side1;
        double _side2;
        double _side3;
};


int main() {
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0); 
    Triangle triangle(4.0, 4.0, 3.2); 

    
    cout << "Circle: " << std::endl;
    cout << "Area: " << circle.GetArea() << std::endl; 
    cout << "Perimeter: " << circle.GetPerimeter() << std::endl; 

    cout << "\nRectangle: " << std::endl;
    cout << "Area: " << rectangle.GetArea() << std::endl;
    cout << "Perimeter: " << rectangle.GetPerimeter() << std::endl;

    cout << "\nTriangle: " << std::endl;
    cout << "Area: " << triangle.GetArea() << std::endl;
    cout << "Perimeter: " << triangle.GetPerimeter() << std::endl;

    return 0; 
}

