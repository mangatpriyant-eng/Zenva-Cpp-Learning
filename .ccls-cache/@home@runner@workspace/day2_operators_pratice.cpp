#include <iostream>
#include <cmath>

int main() {
    std::cout << "===== OPERATORS PRACTICE =====" << std::endl;

    // ===== ARITHMETIC OPERATORS =====
    std::cout << "\n--- Arithmetic Operators ---" << std::endl;
    int a = 20;
    int b = 7;

    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;  // Integer division
    std::cout << a << " % " << b << " = " << (a % b) << std::endl;  // Remainder

    // ===== INCREMENT/DECREMENT =====
    std::cout << "\n--- Increment/Decrement ---" << std::endl;
    int count = 5;
    std::cout << "Initial count: " << count << std::endl;

    std::cout << "count++: " << count++ << std::endl;  // Uses 5, then becomes 6
    std::cout << "After count++: " << count << std::endl;

    std::cout << "++count: " << ++count << std::endl;  // Becomes 7, then uses 7
    std::cout << "After ++count: " << count << std::endl;

    // ===== COMPARISON OPERATORS =====
    std::cout << "\n--- Comparison Operators ---" << std::endl;
    int x = 10;
    int y = 20;

    std::cout << std::boolalpha;  // Print true/false instead of 1/0
    std::cout << x << " == " << y << ": " << (x == y) << std::endl;
    std::cout << x << " != " << y << ": " << (x != y) << std::endl;
    std::cout << x << " < " << y << ": " << (x < y) << std::endl;
    std::cout << x << " > " << y << ": " << (x > y) << std::endl;
    std::cout << x << " <= " << y << ": " << (x <= y) << std::endl;
    std::cout << x << " >= " << y << ": " << (x >= y) << std::endl;

    // ===== LOGICAL OPERATORS =====
    std::cout << "\n--- Logical Operators ---" << std::endl;
    bool hasKey = true;
    bool doorLocked = false;

    std::cout << "hasKey && doorLocked: " << (hasKey && doorLocked) << std::endl;
    std::cout << "hasKey || doorLocked: " << (hasKey || doorLocked) << std::endl;
    std::cout << "!hasKey: " << (!hasKey) << std::endl;
    std::cout << "!doorLocked: " << (!doorLocked) << std::endl;

    // ===== COMPOUND ASSIGNMENT =====
    std::cout << "\n--- Compound Assignment ---" << std::endl;
    int score = 100;
    std::cout << "Initial score: " << score << std::endl;

    score += 50;  // score = score + 50
    std::cout << "After score += 50: " << score << std::endl;

    score -= 30;  // score = score - 30
    std::cout << "After score -= 30: " << score << std::endl;

    score *= 2;  // score = score * 2
    std::cout << "After score *= 2: " << score << std::endl;

    score /= 4;  // score = score / 4
    std::cout << "After score /= 4: " << score << std::endl;

    // ===== PRACTICE EXERCISES =====
    std::cout << "\n===== YOUR TURN - PRACTICE EXERCISES =====" << std::endl;
    std::cout << "TODO: Complete the exercises below!\n" << std::endl;

    // Exercise 1: Calculate the area of a rectangle (length * width)
    int length = 15;
    int width = 8;
    // int area = ???;  // COMPLETE THIS
    int rectangle_area = (length*width);
    std::cout << "Rectangle area: [COMPLETE THIS]" << std::endl;
    std::cout << "rectangle_area: " << rectangle_area << std::endl;

    // Exercise 2: Check if a number is even (use % operator)
    int number = 42;
    // bool isEven = ???;  // COMPLETE THIS (hint: number % 2 == 0)
    std::cout << "Is " << number << " even? [COMPLETE THIS]" << std::endl;
    //if number % 2 == 0;
   // number == isEven;
   // bool isEven = (number % 2 == 0); || bool isOdd = (number % 2 != 0); //  the or operater is not meant to seperate varaible declarations
    bool isEven = (number % 2 == 0);
    bool isOdd = (number % 2 != 0);
    //if number = isEven; {
      //  std::cout << "number is;" << number << "is even"<< isEven<< std::endl;
    //}
   // else if number = isOdd;{
     //   std::cout << "number is:" << number << "is odd" << isOdd << std::endl;
    //}// errors: the if and else if statements should use the equality operator == instead of assignment operator = , the syntax for an if statement in c++ should include parenthesis around if (conditions) {...} and the else if statement should also include parenthesis around else if (conditions) {...} In C++, semicolons (;) should not appear immediately after if and else if conditions—they terminate statements.
   // Corrections:
    //Each if and else if should compare isEven and isOdd directly, without using number = isEven, which is incorrect.
if (isEven) {
  std::cout << "number is: " << number << " is even: " << isEven << std::endl;} 
else if (isOdd) {
    std::cout << "number is: " << number << " is odd: " << isOdd << std::endl;
           }
    
    // Exercise 3: Check if someone can enter a club (age >= 18 AND hasID)
    int age = 21;
    bool hasID = true;
    // bool canEnter = ???;  // COMPLETE THIS
    std::cout << "Can enter club? [COMPLETE THIS]" << std::endl;
    bool isAllowed = (age >= 18 && hasID);
    if (isAllowed) {
        std::cout << "age is: " << age << " hasID " << hasID << "isAllowed " << isAllowed << std::endl;
    }
    bool isntAllowed = (age< 18 && !hasID);
    if (isntAllowed) {
        std::cout << "age is:" << age << "hasID" << hasID << "isntAllowed" << isntAllowed << std::endl;
    }
    
    // Exercise 4: Triple a number using compound assignment
    int value = 5;
    // value ???;  // COMPLETE THIS to make value = 15
    //value *= 3;
    //tripledvalue = value * 3;
    int triplevalue = value * 3;
    std::cout << "Tripled value: [COMPLETE THIS]" << std::endl;
    std::cout << "triplevalue" << triplevalue << std::endl;
    int qaudrapledvalue = value * 4;
    std::cout << "qaudrapledvalue" << qaudrapledvalue << std::endl;
    //int quintupledvalue = value ** 5;
   
    int quintupledvalue = pow(value, 5);
    std::cout << "quintupledvalue" << quintupledvalue << std::endl;
    
    
    
    return 0;
}
