#include <iostream>
#include <cmath>
using namespace std;


class Circle {
    public:
        Circle(int radius):
            _radius(radius)
        {}

        double GetArea() {
            return 3.14159 * pow(_radius, 2);
        }

        double GetCircumference() {
            return 2 * 3.14159 * _radius;
        }

    private:
        double _radius;
};


int main() {
    
    Circle c1(5.2);
    Circle c2(4);
    cout << c1.GetArea() << " " << c1.GetCircumference() << endl;
    cout << c2.GetArea() << " " << c2.GetCircumference() << endl;

}

