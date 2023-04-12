#include <iostream>
#include <cmath>

class Point {
protected:
  int x, y;
public:
  Point(int x, int y) {
      this->x = x;
      this->y = y;
  }

  int getX() const {
      return x;
  }

  int getY() const {
      return y;
  }
};

class Square {
protected:
  Point topLeft;
  double side;
public:
  Square(double side, int x, int y) : topLeft(x, y) {
      this->side = side 0 ? side : 0;
  }

  double getSide() const {
      return side;
  }

  double area() const {
      return topLeft;
  }
};