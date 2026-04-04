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
        void move(float newX, float newY) {
            x = newX;
            y = newY;

        }
        void printPosition() {
            std::cout << "X: " << x << "Y:" << y << std::endl;
        }
}; 
// @mangatpriyant-eng ➜ /workspaces/Zenva-Cpp-Learning (main) $ 
int main() {
    //p.x = 99.00
    Player p(3.0,5.0);           //:
    p.printPosition();
    p.move(10.0, 20.0);
    p.printPosition();  //)
    return 0;

}