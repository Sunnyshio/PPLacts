#include <iostream>

class Point {
protected:
    int x, y;

public:
    Point (int x, int y) {
        setPoint(x, y);
    }

    void setPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getX() {
        return this->x;
    }

    int getY() {
        return this->y;
    }

    void print() {
        std::cout << "[" << this->x << this->y << "]" << std::endl;
    }
};

class DerivedPoint : public Point {
public:
    using Point::Point;
};