
#include <iostream>
#include <string>

int main() {
    std::cout << "===== DAY 2: OPERATORS PRACTICE =====" << std::endl;
    
    // ========== CONSTANTS ==========
    std::cout << "\n===== CONSTANTS =====" << std::endl;
    
    const double PI = 3.14159;
    const int MAX_PLAYERS = 4;
    const std::string GAME_NAME = "Adventure Quest";
    
    std::cout << "PI: " << PI << std::endl;
    std::cout << "Max Players: " << MAX_PLAYERS << std::endl;
    std::cout << "Game Name: " << GAME_NAME << std::endl;
    
    // PI = 3.14;  // ERROR! Cannot change const
    
    // ========== ARITHMETIC OPERATORS ==========
    std::cout << "\n===== ARITHMETIC OPERATORS =====" << std::endl;
    
    int a = 20;
    int b = 6;
    
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
    std::cout << a << " % " << b << " = " << (a % b) << std::endl;
    
    // ========== INCREMENT/DECREMENT ==========
    std::cout << "\n===== INCREMENT/DECREMENT =====" << std::endl;
    
    int score = 100;
    std::cout << "Initial score: " << score << std::endl;
    
    score++;  // Add 1
    std::cout << "After score++: " << score << std::endl;
    
    ++score;  // Add 1
    std::cout << "After ++score: " << score << std::endl;
    
    score--;  // Subtract 1
    std::cout << "After score--: " << score << std::endl;
    
    --score;  // Subtract 1
    std::cout << "After --score: " << score << std::endl;
    
    // ========== COMPARISON OPERATORS ==========
    std::cout << "\n===== COMPARISON OPERATORS =====" << std::endl;
    std::cout << std::boolalpha;  // Print true/false instead of 1/0
    
    int x = 10;
    int y = 20;
    
    std::cout << x << " == " << y << " : " << (x == y) << std::endl;
    std::cout << x << " != " << y << " : " << (x != y) << std::endl;
    std::cout << x << " > " << y << " : " << (x > y) << std::endl;
    std::cout << x << " < " << y << " : " << (x < y) << std::endl;
    std::cout << x << " >= " << y << " : " << (x >= y) << std::endl;
    std::cout << x << " <= " << y << " : " << (x <= y) << std::endl;
    
    // ========== LOGICAL OPERATORS ==========
    std::cout << "\n===== LOGICAL OPERATORS =====" << std::endl;
    
    bool hasKey = true;
    bool doorLocked = false;
    
    std::cout << "Has key: " << hasKey << std::endl;
    std::cout << "Door locked: " << doorLocked << std::endl;
    
    // AND (&&) - Both must be true
    std::cout << "hasKey && doorLocked: " << (hasKey && doorLocked) << std::endl;
    
    // OR (||) - At least one must be true
    std::cout << "hasKey || doorLocked: " << (hasKey || doorLocked) << std::endl;
    
    // NOT (!) - Reverses the value
    std::cout << "!hasKey: " << (!hasKey) << std::endl;
    std::cout << "!doorLocked: " << (!doorLocked) << std::endl;
    
    // ========== COMPOUND ASSIGNMENT ==========
    std::cout << "\n===== COMPOUND ASSIGNMENT =====" << std::endl;
    
    int points = 50;
    std::cout << "Initial points: " << points << std::endl;
    
    points += 10;  // Same as: points = points + 10
    std::cout << "After points += 10: " << points << std::endl;
    
    points -= 5;  // Same as: points = points - 5
    std::cout << "After points -= 5: " << points << std::endl;
    
    points *= 2;  // Same as: points = points * 2
    std::cout << "After points *= 2: " << points << std::endl;
    
    points /= 5;  // Same as: points = points / 5
    std::cout << "After points /= 5: " << points << std::endl;
    
    points %= 7;  // Same as: points = points % 7
    std::cout << "After points %= 7: " << points << std::endl;
    
    // ========== YOUR TURN: EXERCISES ==========
    std::cout << "\n===== YOUR EXERCISES =====" << std::endl;
    
    // TODO: Exercise 1 - Create constants for your favorite game
    // const std::string FAVORITE_GAME = ?;
    // const int MAX_LEVEL = ?;
    // const double DIFFICULTY_MULTIPLIER = ?;
    
    // TODO: Exercise 2 - Calculate area and perimeter of a rectangle
    // int length = 15;
    // int width = 8;
    // Calculate: area = length * width
    // Calculate: perimeter = 2 * (length + width)
    
    // TODO: Exercise 3 - Create a simple health system
    // int health = 100;
    // health -= 25;  // Take damage
    // health += 10;  // Heal
    // std::cout << "Final health: " << health << std::endl;
    
    // TODO: Exercise 4 - Check if a player can enter a dungeon
    // int playerLevel = 15;
    // const int MIN_LEVEL = 10;
    // bool hasTicket = true;
    // bool canEnter = (playerLevel >= MIN_LEVEL) && hasTicket;
    // std::cout << "Can enter dungeon: " << canEnter << std::endl;
    
    // TODO: Exercise 5 - Practice all comparison operators
    // int apples = 10;
    // int oranges = 15;
    // Test ==, !=, >, <, >=, <=
    
    return 0;
}
