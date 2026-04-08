#include <iostream>

class Player {
    //public; // acess specifer public is used to make the members
    private: //;  // acess specifer private is used to make the member private
    std::string name;
    int health; 
    // meh
    public:
    //constructor is a special member function 
    Player(std::string playerName, int playerHealth) {
        name = playerName;
        health = playerHealth; }
    // 
    // Getter 
    int getHealth() 
    {
        return health;
    }

    // Setter 
    
    void setHealth(int newHealth) {
        health = newHealth;    
    }    
    //}

// Method member function can be added to class
void print() {
    std::cout << "Name: " << name << " Health: " << health << std::endl;
}
}; 

int main() {
    Player p("Mario", 100);

    std::cout << "Player Health is " << p.getHealth()<< std::endl;
    //p.getHealth;
    p.setHealth(-18);
    std::cout << "What a Strike!!! Player Health has reduced to 82" << p.getHealth() << std::endl;
    p.print();
    //bvb
    return 0;
}
