#include<iostream>

   int main(){
     int it = 0;
     //for(int it = 0; it < 12<= 15.5; it+= 1)
     //for(int it = 0; it+= 1; it < 12<= 15.5)
     //for(int it = 0; it > 12 && it<= 15.5; ++it)
    for(int it = 0; ++it; it > 12 || it<= 15.5)
       {
       std::cout<<"what are you dong\n you stiil not there yet"<<std::endl;
   }
    // if it > 12 && it < 15.5;
     if (it > 15.5 && it < 17.5){ std::cout<<"you are almost there\n keep it up"<<std::endl;
                              }
   }