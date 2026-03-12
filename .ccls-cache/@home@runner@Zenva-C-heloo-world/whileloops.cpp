#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
int main() {
  // int location = 0:
  int location = 0;
  // int final location = 11;
  int finallocation = 11;
  // Declare using an array
  // location1 = location
  // int location1[10] = {0}; // An array of 10 integers

  // OR using a pointer
  // int* location1 = new int[10]; // Dynamically allocated array

  // OR using a vector (if you include <vector>)
  // std::vector<int> location1(10);
  bool isMatchFinished = false;
  int index = 7;
  // char w
  // charecter input;
  // char p = 'enemy';
  char p[] = "enemy";
  // char combined = [final location, p]
  // char combined = p + input;
  char input;
  // char k = "fast attack";
  char k[] = "fast attack";
  // char i = "heavy attack";
  char i[] = "heavy attack";
  // char i = "heavy attack";
  char t[] = "dodge";
  char z[] = "heal";
  char m[] = "retreat";
  char n[] = "block";
  // int spot = int(p);
  // reinterpreted as an integer;
  // reinterpret_cast
  // p = location[7];
  // p = location1[7];
  int spot = reinterpret_cast<std::uintptr_t>(p);
  // string koft = reinterpreted as an integer;
  // reinterpreted as an integer;
  //std::uintptr_t address = reinterpret_cast<std::uintptr_t>(k);
  //std::string koft = std::to_string(address); // converts the interger to string
  // string koft = reinterpret_cast<std::uintptr_t>(k);
  // std::uintptr_t address = reinterpret_cast<std::uintptr_t>(k);
  std::stringstream ss;
  // std::ostringstream oss;
  // oss << spot;
  // oss << koft;
  // oss << address;
 // ss << address; //
  // std::string address = oss.str();
  // std::string koft = oss.str();
  // alternative to first koft definition std::string koft = ss.str();
  // p != finallocation and p! = 0;
  // p != final location and p!= 0;
  // intptr_t p = reinterpret_cast<intptr_t>(p);
  // spots = reinterpret_cast<std::uintptr_t>(p);
  // spot = 7;
  // spot = location(7);
  // spot = location[7];
  // spot = location;
  int *location1 = reinterpret_cast<int *>(location);
  spot = location1[7];
  spot = location1[index];
  int combatStage = 1;
  while (location != finallocation and location > 0)
  // while (location != final location)
  {
    std::cout << "you are still not there yet" << std::endl;
    // if p = location:
    // if (int p = location)
    // if (int p == location)
    // int* location1 = new int[10];
    // int* location1 = reinterpret_cast<std:: location[10];
    // int* location1 = reinterpret_cast<int*>(location); // Dynamically
    // allocated array
    //  int* location1 = reinterpret_cast<int*>(&location);  // Convert the
    //  address of an integer location to an int pointer
    // delete[] location1; // Free the allocated memory
    //  OR using a vector (if you include <vector>)
    // std::vector<int> location1(10);
    // spot = location1[7];
    // spot = location1[index];
    // spot = location[index];
    // if (spot == location)
    // if (spot == location1)
    // if (spot == location[7])
    // if (spot == location1[7])
  }
  if (spot == location1[index]) {
    //int combatStage = 1;
    std::cout << "you have been spotted" << std::endl;
    std::cin >> input;
    {
    // \033[31m
      
      std::cout<<"\033[31m<<\033[1m"<<input<<"\033[0m"<<std::endl; 
      } 
      //int combatStage = 1;
    //}
    // if input == k:
    // if (input == k)
    // if (strcmp(&input, k) != 0)
    // if (strcmp(&input, koft) != 0)
    //if (strcmp(&input, koft.c_str()) != 0)
    if(input == 'k'&& combatStage == 1){
      std::cout << "you have inflicted a light surprise attack \n"
                   "the enemy prepares to retaliate"
                << std::endl;
      std::cin >> input;
      //std::cout << "\033[35m" << input << std::endl; 
     // combatStage = 2;
    }
    // if input == i;
    else if (input == 'i' && combatStage == 1) 
   // if (strcmp(&input, i) != 0)
    {
      // std::cout << "you died" n/isMatchFinished == true<< std::endl;
      std::cout << "you died" << std::endl;
      // isMatchFinished == true:
      isMatchFinished = true;
      
    }
    combatStage = 2;  
     if(input == 't' && combatStage == 2) {
     // (strcmp(&input, t) != 0) 
    
      std::cout << "\033[45m" << input << std::endl; 
      std::cout << "you have dodged the attack \n"
                   "well done"
                << std::endl;
    }
    // i++;
    //  if input == char k:
    //  if input == char k:
    // if (strcmp(input, k) == 0) {
    //  Code to execute if the strings are equal
    //}
    // if input == k:
    // if input = k:
    // if (ncmp(input, k) == 0){
    //}
    // if(input ==k)
    //if (strcmp(&input, k) != 0) 
    else if (input == 'k' && combatStage == 2){
      std::cout << "\033[41m" << input << std::endl; 
      std::cout << "you have interrupted the enemy attack\n"
                   "the enemy however inflicted some damage on you"
                << std::endl;

      std::cin >> input;
    }
    // if input != z:
    //  Correcting the input syntax
    // if (strcmp(&input, z) != 0) {  // Assuming input is a single character,
    // corrected to compare properly with z Code block to execute if input is
    // not equal to z
    //}
    else if (input != 'z' && combatStage ==2)
    //if (strcmp(&input, z) != 0) 
     {
      // code to execute if input is not equal to z
      //std::cout << "\032[57m" << input << std::endl; 
      //std::cout << "\037[35m" << input << std::endl;
      //std::cout << "\033[28m" << input << std::endl;
      std::cout << "\037[68m" << input << std::endl;
      std::cout << "you have 75% of your health left\n"
                << "you should heal" << std::endl;
     }
     else if(input == 'z' && combatStage == 2){ std::cout << "you healed \n nice work beware the fight has just began" << std::endl;
       
       } //combatStage = 3;
    }
  
  combatStage = 3;
    // char direction;
    // chs
    // bool isMatchFinished = false;
    while (location < finallocation)
    // while (location < final location)
    {
      // location+++;
      location += 1;
      //std::cout << "\036[41m" << input <<  "\033[0m" << std::endl; 
      std::cout << "\033[41m" << input <<  "\033[0m" << std::endl; 
      std::cout << "current position is " << location << std::endl;
      if (input == 'm' && combatStage == 3){
        location -= 1;
        std::cout << "you are going back" << std::endl;
        if (location <= 3 && combatStage == 3){ 
        std::cout << "you have gone too far back" << std::endl;
        std::cin >> input;
          if(input == 'm' && combatStage == 3){std::cout << "enemy behind you" << std::endl; std::cin >> input;
       if(input == 'n' && combatStage == 3){std::cout << "nice block \n you blocked his attack" << std::endl; std::cin>> input;}                                       }
        else{std::cout << "you shoudn't go back" << std::endl;  
        }
      } // m
       // k
    combatStage = 4;      
      if (location >=4 and location <=7)
      {
        //std::cout << "\036[46m" << input << "current position is " << location << std::endl;
        std::cout << "\033[35;5;83;47;5;223m" << input  << std::endl;
        //std::cout << "\033[38;5;82;48;5;223m" << input << "\033[0m" << std::endl;
        std::cout << "current position is dangerous \n you should prepare" << "you in danger zone the enemy is here at" << location << std::endl;
      std::cin >> input;
     // if (strcmp(&input, koft.c_str()) != 0)
      //if (strcmp(&input, koft.c_str()) == 0)
      if (input == 'k' && combatStage ==4){
        std::cout << "nice you have the made the correct choice" << std::endl;
      }
      if (input == 'm' && combatStage == 4){
        location -= 1;
        std::cout << "you are going back \n enemy might be behind you" << std::endl;
      } else if (location == 3 && combatStage == 4){std::cout <<"\033[46;5;85m" << "behind you" << "\033[0m"<<std::endl;
         std::cin >> input; 
         if (input == 'k' && combatStage == 4){std::cout << "\033[34m"<<"nice you have stunned the enemy" << "\033[0m"<< std::endl; }  
         else if (input == 't'&& combatStage ==4){std::cout << "\033[34m"<< "you have got out of the way" << "\033[0m"<<std::endl;  }                                          } 
        else if(location == 4 && combatStage == 4){ 
        
          std::cout << "\033[43;5;82m" << "you died"<<  "\033[0m" << std::endl;
        //location -=1; 
      }
        
      }
    }
    // while (!isMatchFinished)
    // while (!isMatchFinished)
    // }
    //    } 
    {
    //std::cout << "\033[?25h"; // ANSI escape code to show cursor
    // std::cout << "\033[?2mh";  // ANSI escape code to show cursor
    //std::cout << "\033[?2m";  // ANSI escape code to show cursor
     // std::cout << "\039[?200m";  // ANSI escape code to show cursor // causes 9[?200m to be displayed
      //std::cout << "\033[?78m";  // ANSI escape code to show cursor
      //std::cout << "\033[?42m";
      //std::cout << "\033[?102h";
      //std::cout << "\033[?102h" << std::endl;
      std::cout<< "\033[?93m" << input << std::endl;// the ? prevent the colours from being displayed
      std::cout << "why" << std::endl;
      std::cout << "\033[48;5;82m" << input << std::endl;
      std::cout << "no" << "\033[0m"<< std::endl;
      std::cout<< "\033[48;5;225;35;5;93m" << input << std::endl;
      //std::cout << "\037[?25h";
      std::cout << "well done" <<  "\033[0m" << std::endl;
      std::cout << "end of game" << std::endl;
      }
    }
  }
  // }
//}