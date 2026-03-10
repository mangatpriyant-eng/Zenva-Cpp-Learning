#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  int location_val = 0;
  int finallocation = 11;
  bool isMatchFinished = false;
  int index = 7;
  (void)index;
  char p[] = "enemy";
  (void)p;
  char input = ' ';
  
  int spot = 0;
  std::stringstream ss;
  int *location1_ptr = &location_val;
  spot = location1_ptr[0];
  int combatStage = 1;

  while (location_val != finallocation && location_val > 0)
  {
    std::cout << "you are still not there yet" << std::endl;
  }
  
  if (spot == location1_ptr[0]) {
    std::cout << "you have been spotted" << std::endl;
    std::cin >> input;
    std::cout<<"\033[31m<<\033[1m"<<input<<"\033[0m"<<std::endl; 

    if(input == 'k' && combatStage == 1){
      std::cout << "you have inflicted a light surprise attack \n"
                   "the enemy prepares to retaliate"
                << std::endl;
      std::cin >> input;
    }
    else if (input == 'i' && combatStage == 1) 
    {
      std::cout << "you died" << std::endl;
      isMatchFinished = true;
    }
    combatStage = 2;  
    if(input == 't' && combatStage == 2) {
      std::cout << "\033[45m" << input << std::endl; 
      std::cout << "you have dodged the attack \n"
                   "well done"
                << std::endl;
    }
    else if (input == 'k' && combatStage == 2){
      std::cout << "\033[41m" << input << std::endl; 
      std::cout << "you have interrupted the enemy attack\n"
                   "the enemy however inflicted some damage on you"
                << std::endl;
      std::cin >> input;
    }
    else if (input != 'z' && combatStage == 2)
    {
      std::cout << "\037[68m" << input << std::endl;
      std::cout << "you have 75% of your health left\n"
                << "you should heal" << std::endl;
    }
    else if(input == 'z' && combatStage == 2){ 
      std::cout << "you healed \n nice work beware the fight has just began" << std::endl;
    } 
  }
  
  combatStage = 3;
  while (location_val < finallocation)
  {
    location_val += 1;
    std::cout << "\033[41m" << input <<  "\033[0m" << std::endl; 
    std::cout << "current position is " << location_val << std::endl;
    if (input == 'm' && combatStage == 3){
      location_val -= 1;
      std::cout << "you are going back" << std::endl;
      if (location_val <= 3 && combatStage == 3){ 
        std::cout << "you have gone too far back" << std::endl;
        std::cin >> input;
        if(input == 'm' && combatStage == 3){
          std::cout << "enemy behind you" << std::endl; 
          std::cin >> input;
          if(input == 'n' && combatStage == 3){
            std::cout << "nice block \n you blocked his attack" << std::endl; 
            std::cin>> input;
          }                                       
        }
        else{
          std::cout << "you shoudn't go back" << std::endl;  
        }
      } 
    }
    
    combatStage = 4;      
    if (location_val >=4 && location_val <=7)
    {
      std::cout << "\033[35;5;83;47;5;223m" << input  << std::endl;
      std::cout << "current position is dangerous \n you should prepare" << "you in danger zone the enemy is here at" << location_val << std::endl;
      std::cin >> input;
      if (input == 'k' && combatStage ==4){
        std::cout << "nice you have the made the correct choice" << std::endl;
      }
      if (input == 'm' && combatStage == 4){
        location_val -= 1;
        std::cout << "you are going back \n enemy might be behind you" << std::endl;
      } 
      else if (location_val == 3 && combatStage == 4){
        std::cout <<"\033[46;5;85m" << "behind you" << "\033[0m"<<std::endl;
        std::cin >> input; 
        if (input == 'k' && combatStage == 4){
          std::cout << "\033[34m"<<"nice you have stunned the enemy" << "\033[0m"<< std::endl; 
        }  
        else if (input == 't'&& combatStage ==4){
          std::cout << "\033[34m"<< "you have got out of the way" << "\033[0m"<<std::endl;  
        }                                          
      } 
      else if(location_val == 4 && combatStage == 4){ 
        std::cout << "\033[43;5;82m" << "you died"<<  "\033[0m" << std::endl;
      }
    }
  }

  std::cout<< "\033[?93m" << input << std::endl;
  std::cout << "why" << std::endl;
  std::cout << "\033[48;5;82m" << input << std::endl;
  std::cout << "no" << "\033[0m"<< std::endl;
  std::cout<< "\033[48;5;225;35;5;93m" << input << std::endl;
  std::cout << "well done" <<  "\033[0m" << std::endl;
  std::cout << "end of game" << std::endl;

  return 0;
}
