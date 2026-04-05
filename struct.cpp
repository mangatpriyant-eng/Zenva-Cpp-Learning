#include <iostream>

struct Position {
    float x;
    float y;

    Position(float startX, float startY) {
        x = startX;
        y = startY;
    }

    void print() {
        std::cout << "X: " << x << " Y: " << y << std::endl;
    }
};

int main() {
    Position pos(3.0, 5.0);
    pos.print();

    pos.x = 10.0;
    pos.print();

    return 0;
}
