
#include <iostream>
#include <string>

int main() {
    // ===== BOOLEANS =====
    std::cout << "===== BOOLEANS =====" << std::endl;
    bool isLearning = true;
    bool isConfused = false;
    std::cout << "Am I learning? " << isLearning << std::endl;
    std::cout << "Am I confused? " << isConfused << std::endl;
    
    // ===== INTEGERS =====
    std::cout << "\n===== INTEGERS =====" << std::endl;
    int age = 25;
    int score = 100;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Score: " << score << std::endl;
    
    // ===== DOUBLES/FLOATS =====
    std::cout << "\n===== DOUBLES/FLOATS =====" << std::endl;
    double price = 19.99;
    float temperature = 72.5f;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Temperature: " << temperature << "F" << std::endl;
    
    // ===== CHARACTERS =====
    std::cout << "\n===== CHARACTERS =====" << std::endl;
    char grade = 'A';
    char initial = 'J';
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    
    // ===== STRINGS =====
    std::cout << "\n===== STRINGS =====" << std::endl;
    std::string name = "John";
    std::string language = "C++";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Learning: " << language << std::endl;
    
    // ===== CONSTANTS =====
    std::cout << "\n===== CONSTANTS =====" << std::endl;
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;
    std::cout << "PI: " << PI << std::endl;
    std::cout << "Days in week: " << DAYS_IN_WEEK << std::endl;
    
    return 0;
}
