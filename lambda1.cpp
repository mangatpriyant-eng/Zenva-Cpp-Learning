#include <iostream>

// Regular function
 //int multiply(int x, int y) 
 int p(int x , int y)
{
    return x * y;
//int k = p(7,8);      
//p = multiply(6,8)
 }

int main() {
    int k = p(7,8);
    // Lambda function
    //auto lambda_multiply = [k](int x, int y) 
    auto capture_lambda = [k](int x) {
        return x * k;
   // auto capture_lambda = [p](int x) {
       // return x * p;
        
    };

    // Both do the same thing
   // std::cout << multiply(5, 3) << std::endl;      // Regular function
    std::cout << capture_lambda(3) << std::endl; // Lambda function

    return 0;
    }


