#include <iostream>
using namespace std;

class Point {
protected:
    int x, y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
};

class Square : public Point {
protected:
    double sideLength;
public:
    Square(double sideLength, int x, int y) : Point(x, y) {
        setSideLength(sideLength);
    }

    void setSideLength(double sideLength) {
        this->sideLength = sideLength > 0 ? sideLength : 0;
    }

    double getSideLength() {
        return this-> sideLength;
    }

    double area() {
        return this->sideLength * this->sideLength;
    }
};

int main() {
    Square sq(5, 10, 20);
    cout << "The area of the square is " << sq.area() << endl;

    return 0;
}