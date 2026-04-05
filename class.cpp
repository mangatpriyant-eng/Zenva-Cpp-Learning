#include <iostream>

class Player {
    //public; // acess specifer public is used to make the members
    private: //;  // acess specifer private is used to make the member private
    std::string name;
    int health; 

    public:
    //constructor is a special member function 
    Player(std::string playerName, int playerHealth) {
        name = playerName;
        health = playerHealth;
    }

// Method member function can be added to class
void print() {
    std::cout << "Name: " << name << " Health: " << health << std::endl;
}
}; 

int main() {
    Player p("Mario", 100);
    p.print();

    return 0;
}
