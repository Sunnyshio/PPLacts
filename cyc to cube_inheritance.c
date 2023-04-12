#include <iostream>

using namespace std;

class Shape {
    public:
        virtual double area() = 0;
        virtual double volume() = 0;
};

class Cube : public Shape {
    private:
        double length:

    public:
        Cube(double length) {
            this->length = length > 0 ? length : 0;
        }

        double getLength() {
            return this->length;
        }

        void setLength(double length) {
            this->length = length > 0 ? length : 0;
        }

        double area() {
            return 6 * length * length;
        }

        double volume() {
            return length * length * length;
        }
};

int main() {
    Cube cube(5.0);
    cout << "Length: " << cube.getLength() << endl;
    cout << "Area: " << cube.area() << endl;
    cout << "Volume: " << cube.volume() << endl;
    return 0;
}