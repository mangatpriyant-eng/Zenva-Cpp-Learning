#include<iostream> 

int main()
{
    int decision = 0;  
    char decison_unused = 'w';   // default
    (void)decison_unused;
    int resume_val = 1 ; 
    (void)resume_val;
    int settings_val = 2; 
    (void)settings_val;
    {
        if (decision == 2) {std::cout << "setting"<< std::endl;} 
        int game_control_settings =1; (void)game_control_settings;
        int volume = 2; (void)volume;
        int brightness = 3; (void)brightness;
        int language = 4; (void)language;
        int difficulty_mode = 5; (void)difficulty_mode;
        int returnto_main_menu =6; (void)returnto_main_menu;
        int resume_game= 7; (void)resume_game;
        int trivia = 8; (void)trivia;
        
        switch (decision) {
            case 1: std::cout << "control settings" << std::endl; break; 
            case 2: std::cout << "volume" << std::endl; break; 
            case 3: std::cout << "brightness levels" << std::endl; break; 
            case 4: std::cout << "langauge options" << std::endl; break; 
            case 5: std::cout << "difficulty mode" << std::endl; break; 
            case 6: std::cout << "return to main menu" << std::endl; break; 
            case 7: std::cout << "resume game" << std::endl; break; 
            case 8: std::cout << "trivia" << std::endl; break; 
        }
        std::cin >> decision;
    }
    int map_val = 3; (void)map_val;
    int lore_val = 4 ; (void)lore_val;
    int exit_game_val = 5; (void)exit_game_val;

    if (decision != 5) {
        switch (decision) {
            case 1: 
            default: std::cout << "Game Resumed" << std::endl; break; 
            case 2: std::cout << "Game settings"<< std::endl; break; 
            case 3: std::cout << "Map" << std::endl; break; 
            case 4: std::cout << "Lore" << std::endl; break;
        } 
        char input_char = 't'; 
        (void)input_char;
        std::cin >> input_char;
    }
    return 0; // what does default do
}