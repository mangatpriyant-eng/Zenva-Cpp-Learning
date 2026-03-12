
#include <iostream>
#include <string>

int main() {
    std::cout << "===== CONSTANTS PRACTICE =====" << std::endl;
    
    // ========== BASIC CONSTANTS ==========
    std::cout << "\n--- Basic Constants ---" << std::endl;
    
    const int DAYS_IN_WEEK = 7;
    const int HOURS_IN_DAY = 24;
    const int MINUTES_IN_HOUR = 60;
    
    std::cout << "Days in week: " << DAYS_IN_WEEK << std::endl;
    std::cout << "Hours in day: " << HOURS_IN_DAY << std::endl;
    std::cout << "Minutes in hour: " << MINUTES_IN_HOUR << std::endl;
    
    // Calculate minutes in a week
    int minutesInWeek = DAYS_IN_WEEK * HOURS_IN_DAY * MINUTES_IN_HOUR;
    std::cout << "Minutes in a week: " << minutesInWeek << std::endl;
    
    // ========== GAME CONSTANTS ==========
    std::cout << "\n--- Game Constants ---" << std::endl;
    
    const int MAX_HEALTH = 100;
    const int MAX_MANA = 50;
    const double CRITICAL_HIT_MULTIPLIER = 1.5;
    const std::string HERO_NAME = "Warrior";
    
    std::cout << "Max Health: " << MAX_HEALTH << std::endl;
    std::cout << "Max Mana: " << MAX_MANA << std::endl;
    std::cout << "Critical Hit Multiplier: " << CRITICAL_HIT_MULTIPLIER << std::endl;
    std::cout << "Hero Name: " << HERO_NAME << std::endl;
    
    // ========== PHYSICS CONSTANTS ==========
    std::cout << "\n--- Physics Constants ---" << std::endl;
    
    const double GRAVITY = 9.81;
    const double SPEED_OF_LIGHT = 299792458.0;  // meters per second
    const double PI = 3.14159;
    
    std::cout << "Gravity: " << GRAVITY << " m/s²" << std::endl;
    std::cout << "Speed of Light: " << SPEED_OF_LIGHT << " m/s" << std::endl;
    std::cout << "PI: " << PI << std::endl;
    
    // Calculate circle area
    double radius = 5.0;
    double circleArea = PI * radius * radius;
    std::cout << "Circle area (radius " << radius << "): " << circleArea << std::endl;
    
    // ========== WHY USE CONST? ==========
    std::cout << "\n--- Why Use Constants? ---" << std::endl;
    
    // Without const - value can change accidentally
    int maxScore = 1000;
    maxScore = 500;  // Oops! Changed by mistake
    std::cout << "Max score (changeable): " << maxScore << std::endl;
    
    // With const - value is protected
    const int REAL_MAX_SCORE = 1000;
    // REAL_MAX_SCORE = 500;  // ERROR! Cannot change
    std::cout << "Real max score (protected): " << REAL_MAX_SCORE << std::endl;
    
    // ========== YOUR EXERCISES ==========
    std::cout << "\n===== YOUR TURN =====" << std::endl;
    
    // TODO: Exercise 1 - Create constants for a space game
    // const double EARTH_GRAVITY = 9.81;
    // const double MOON_GRAVITY = 1.62;
    // const double MARS_GRAVITY = 3.71;
    
    // TODO: Exercise 2 - Create constants for money/currency
    // const double DOLLAR_TO_EURO = 0.85;
    // const double DOLLAR_TO_YEN = 110.0;
    // Calculate conversions
    
    // TODO: Exercise 3 - Game settings constants
    // const int MAX_PLAYERS = 4;
    // const std::string GAME_MODE = "Team Battle";
    // const double DAMAGE_MULTIPLIER = 1.25;
    
    // TODO: Exercise 4 - Calculate using multiple constants
    // Use DAYS_IN_WEEK, HOURS_IN_DAY to calculate:
    // - Hours in a week
    // - Seconds in a day
    
    return 0;
}
