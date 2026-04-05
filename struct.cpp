#include <iostream> 

struct Position {
    float x;
    float y;
// constructor can be added to struct as well, but it's not required
Position(float startX, float startY) { //why is it Position and not void i mean it not function position    
x = startX;
y = startY;
}

//Method Member functions can also be added to struct as well but it is not required
void print() {
    std::cout << "X: " << x << " Y: " << y << std::endl;
}
};

int main () {
  Position pos(3.0 , 5.0); // constructor can be used to initialize the struct members
   pos.print();
   pos.x = 10.0 ; // members can be accessed and modified directly using the . operator
   pos.print();
    return 0; 
}
