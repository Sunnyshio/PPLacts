#include <iostream>

class Square {
private:
    double side;
    int x, y;

public:
    Square(double side, int x, int y) : side(side), x(x), y(y) {}
      
    void setSide(double side) {
        this->side = side > 0 ? side : 0;
    }

    double getSide() const {
        return side;
    }

    double area() const {
        return side * side;
    }
};

class Cube {
private:
    Square base;
    double height;

public:
    Cube(double side, int x, int y, double height)
        : base(side, x, y), height(height) {}
        
    void setHeight(double height) {
        this->height = height > 0 ? height : 0;
    }
    
    double getHeight() const {
        return height;
    }

    double surfaceArea() const {
        return 6 * base .area();
    }

    double volume() const {
        return base.area() * height;
    }
};

int main() {
    Cube myCube(3, 0, 0, 3);
    std::cout << "Surface area: " << myCube.surfaceArea() << std::endl;
    std::cout << "Volume: " << myCube.volume() << std::endl;
    return 0;
}