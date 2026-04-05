#include <iostream> 

struct Position {
    float x;
    float y;
};

int main () {
    Position pos;
    pos.x = 3.0;
    pos.y = 5.0;

    std::cout <<"X: " << pos.x << " y: " << pos.y << std::endl;
    
    return 0;
}