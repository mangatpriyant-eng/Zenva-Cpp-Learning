#include <iostream> 

class Player {
    private:
        float x;
        float y;
        
    public:
        Player(float startX, float startY) {
            x = startX;
            y = startY;
        }

        // Getters
        float getX() { return x; }
        float getY() { return y; }

        // Setters
        void setX(float newX) { 
            if (newX < 0) newX = 0;  // can't go off screen!
            x = newX; 
        }
        void setY(float newY) { 
            if (newY < 0) newY = 0;  // can't go off screen!
            y = newY; 
        }

        void move(float newX, float newY) {
            x = newX;
            y = newY;
        }
        void printPosition() {
            std::cout << "X: " << x << " Y: " << y << std::endl;
        }
}; 

int main() {
    Player p(3.0, 5.0);
    p.printPosition();

    p.setX(10.0);
    p.setY(20.0);
    p.printPosition();

    std::cout << "X is: " << p.getX() << std::endl;
    std::cout << "Y is: " << p.getY() << std::endl;

    p.setX(-5.0);  // should clamp to 0!
    std::cout << "X after negative set: " << p.getX() << std::endl;

    