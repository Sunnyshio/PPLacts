#include <iostream>

class Point {
    private:
        int x;
        int y;

    public:
        Point(int x, int y) : x(x), y(y) {}

        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        void print() const {
            std::cout << "[" << x << ", "<< y << "]" << std::endl;
        }
};

int main() {
    Point p(1, 2);
    std::cout << "x-coordinate of p: " << p.x << std::endl;
    return 0;
}