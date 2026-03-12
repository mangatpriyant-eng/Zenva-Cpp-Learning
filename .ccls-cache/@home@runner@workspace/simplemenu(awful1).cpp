#include<iostream> 

int main()

{
//int decision >= 0 || decision <= 5;
//int decision >= 0 && decision <= 5;
//int decision <=0;
//if (decision =0)
int decision = 0;  
char decison = 'w';   // default
int resume= 1 ; 
int settings = 2; {if (decision == 2) {std::cout << "setting"<< std::endl;} int game_control_settings =1; int volume = 2; int brightness = 3; int language = 4; int difficulty_mode = 5; int returnto_main_menu =6; int resume_game= 7; int trivia = 8;
                  switch (decision){case 1: std::cout << "control settings" << std::endl; break; case 2: std::cout << "volume" << std::endl; break; case 3: std::cout << "brightness levels" << std::endl; break; case4: std::cout << "langauge options" << std::endl; break; case5: std::cout << "difficulty mode" << std::endl; break; case6: std::cout << "return to main menu" << std::endl; break; case 7: std::cout << "resume game" << std::endl; break; case 8: std::cout << "trivia" << std::endl; break; }std::cin >> decision;}
int map = 3;
int lore = 4 ;
int exit_game = 5; 

if (decision != 5)  {switch (decision) {case 1: default: std::cout << "Game Resumed" << std::endl; break; case 2: std::cout << "Game settings"<< std::endl; break; case 3: std::cout << "Map" << std::endl; break; case 4: std::cout << "Lore" << std::endl; break;} char decision = 't'; std::cin >> decision ;//:wq }
                    }
  return 0; // what does default do
}
