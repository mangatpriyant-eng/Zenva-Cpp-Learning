#include <iostream> 

struct Position {
    float x;
    float y;
// constructor can be added to struct as well, but it's not required
Position(float startX, float startY) { //why is ir Position and not void i mean it not function position    
x = startX;
y = startY;
} //;

//Method Member functions can also be added to struct as well but it is not required
void print() {
    std::cout << "X: " << x << " Y: " << y << std::endl;
}
}; //}; //return0;();; // still directly accesible without needing to create an object of the struct and separete 
int main () {
  //  Position pos;
  Position pos(3.0 , 5.0); // constructor can be used to initialize the struct members
   pos.print(); // method can be used to print the struct members
   // . operator is used to access the members of the struct
  //  pos.x = 3.0;
  //  pos.y = 5.0;
   pos .x = 10.0 ; // members of the struct can be accessed and modified directly using the . operator
  //  std::cout <<"X: " << pos.x << " y: " << pos.y << std::endl;
   pos.print(); // method can be used to print the struct members after modification 
    return 0; 
}