
#include <iostream>
#include <string>

int main() {
    // ===== BOOLEANS =====
    std::cout << "===== BOOLEANS =====" << std::endl;
    bool isLearning = true;
    bool isConfused = false;
    std::cout << "Am I learning? " << isLearning << std::endl;
    std::cout << "Am I confused? " << isConfused << std::endl;
    std::cout << std::boolalpha; // Print booleans as true/false

    bool isaccelerating = true;
    bool isbraking = false;
    std::cout << "my pace is increasing" << isaccelerating << std::endl;
    std::cout << "i am slowing down or my pace is decreasing: " << isbraking << std::endl;
    //std::cout<< "i am slowing down" or "my pace is decreasing" << isbraking << std::endl;
    std::cout << std::boolalpha;

    bool ascending = false;
    bool descending = true;
    std::cout << "i am reaching towards the summit of the mountain" << ascending << std::endl;
    std::cout << "i am going to back to the base" << descending << std::endl;

    bool isflooding = true;
    bool isntflooding = false;
    std::cout << "my town is being flooded" << isflooding << std::endl;
    std::cout << "where is the flood? \n what are you talking about?" << isntflooding << std::endl;
    
    
    // ===== INTEGERS =====
    std::cout << "\n===== INTEGERS =====" << std::endl;
    int age = 25;
    int score = 100;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Score: " << score << std::endl;
    std::cout << std::boolalpha;

    int speed = 30;
    int distance = 300;
    std::cout<< "speed: " << speed << std::endl;
    std::cout<< "distance: " << distance << std::endl;

    int weight = 750;
    int lenght = 1250;
    int width = 950;
    int height = 1250;
    std::cout<< "weight: " << weight << std::endl;
    std::cout<< "lenght: " << lenght << std::endl;
    std::cout << "width: " << width << std::endl;
    std::cout << "height: " << height << std::endl;
    // ===== DOUBLES/FLOATS =====
    std::cout << "\n===== DOUBLES/FLOATS =====" << std::endl;
    double price = 19.99;
    float temperature = 72.5f;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Temperature: " << temperature << "F" << std::endl;

   // triple price = 450;
    double waterlevel = 2750;
    float watervolume = 7567.89;
    std::cout << "waterlevel" << waterlevel << std::endl;
    std::cout << "watervolume" << watervolume << std::endl;

    double profit = 76890;
    float revenue =7896.789;
    std::cout << "profit" << profit << std::endl;
    std::cout << "revenue" << revenue << std::endl;
    
    
    // ===== CHARACTERS =====
    std::cout << "\n===== CHARACTERS =====" << std::endl;
    char grade = 'A';
    char initial = 'J';
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Initial: " << initial << std::endl;

    //char weather_condition = "Rainy";
    //char intensity_levels = "mild":
    std::string weather_condition = "Rainy";
    std::string intensity_levels = "mild";
    //std::cout<< "mild" <<"Rainy"<< intensity_levels << weather_conditions << std::endl; 
    std::cout<< "intensity_levels:" <<"weather_conditions"<< intensity_levels << weather_condition << std::endl;
   // char stores single characters not multiple
    char level = '7';
    char level_grade = 'A';
    std::cout << "level: " << "level_grade :" << level << level_grade << std::endl;

    //char symbolic_lettor = "b";
    //char symbol = "/";
    // only use single quotes for chars characters
    char symbolic_lettor = 'b';
    char symbol = '/';
    std::cout << "symbolic_lettor: " << "symbol:" << symbolic_lettor << symbol << std::endl;
    
    // ===== STRINGS =====
    std::cout << "\n===== STRINGS =====" << std::endl;
    std::string name = "John";
    std::string language = "C++";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Learning: " << language << std::endl;

    //std::string class = "archer" ;
    //std::string fight_style = "stealth";
    //std::cout << "class: " << "fight_style: " << class << fight_style << std::endl;
    //   the use of class as a varaible is not allowed as it is a reserved keyword in C++

    std::string player_class = "archer" ;
    std::string fight_style = "stealth";
    std::cout << "player_class: " << "fight_style: " << player_class << fight_style << std::endl;

    // ===== CONSTANTS =====
    std::cout << "\n===== CONSTANTS =====" << std::endl;
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;
    std::cout << "PI: " << PI << std::endl;
    std::cout << "Days in week: " << DAYS_IN_WEEK << std::endl;

    //const triple PI = 9.87765;
    const double ZPI = 9.87765;
   // const in days_in_month = 31;
    const int days_in_month = 31;
    std::cout << "ZPI: " << ZPI << std::endl;
    std::cout << "days_in_warmth: " << days_in_month << std::endl;


    //const double gravitational-intensity = 86867.875;
    const double gravitational_intensity = 86867.875;
    //const int mass = 87865"sun"; //
    //connat use string for int here
    const int mass = 87865;
    const std::string starmeasuringstandard = "solarmasses";
    std::cout << "gravitational_intensity:" << gravitational_intensity << std::endl;
    std::cout << "mass:" << mass << "starmeasuringstandard:"<< starmeasuringstandard << "gravitational_intensity"<< gravitational_intensity << std::endl;
    
    
    
    
    // ==== ARRAYS ==== 
    
    return 0;
}
