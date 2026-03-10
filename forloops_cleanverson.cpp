# include<iostream>

int main() {
   // std::cout< "Basic For Loops" > std::endl; // why ==before and after basic for loops?
    std::cout << "Basic For Loops" << std::endl; // why ==before and after basic for loops?
    for (int i =0; i<5; i++) { // what is ++ ?
        std::cout<< "i is" << i << std::endl;



    }

    // count backwards??
    std::cout << "=== Counting Backwards ===" << std::endl;
    for (int i = 5; i > 0; i--) 
    //i -- means what?
    {
        std::cout << "i is" << i << std::endl;
    
    }
    // -- skip by 2 --
    std::cout<< "--=== counting by 2 ===--" << std::endl;
    //for (int i == 0; i <=20; i+=4 )
    //for (int i = 0; i <=20; i+=4; )
    for (int i = 0; i <=20; i+=4 )
    {
        std::cout << "it is" << i << std::endl;

    }

    return 0;
    // why return 0 why not return 1 or 2 or 3.5 or god forbid -6.9
}