#include <iostream>

int main() {
    // ===== BASIC ARITHMETIC OPERATORS =====
    std::cout << "===== BASIC ARITHMETIC OPERATORS =====" << std::endl;

    // Addition (+)
    int a = 10;
    int b = 5;
    int sum = a + b;
    std::cout << a << " + " << b << " = " << sum << std::endl;

    // Subtraction (-)
    int difference = a - b;
    std::cout << a << " - " << b << " = " << difference << std::endl;

    // Multiplication (*)
    int product = a * b;
    std::cout << a << " * " << b << " = " << product << std::endl;

    // Division (/)
    int quotient = a / b;
    std::cout << a << " / " << b << " = " << quotient << std::endl;

    // Modulus (%) - Remainder after division
    int remainder = a % b;
    std::cout << a << " % " << b << " = " << remainder << std::endl;

    // ===== INCREMENT/DECREMENT OPERATORS =====
    std::cout << "\n===== INCREMENT/DECREMENT =====" << std::endl;

    int counter = 10;
    std::cout << "Initial counter: " << counter << std::endl;

    // Post-increment (counter++)
    std::cout << "Post-increment: " << counter++ << std::endl;
    std::cout << "After post-increment: " << counter << std::endl;

    // Pre-increment (++counter)
    std::cout << "Pre-increment: " << ++counter << std::endl;
    std::cout << "After pre-increment: " << counter << std::endl;

    // Post-decrement (counter--)
    std::cout << "Post-decrement: " << counter-- << std::endl;
    std::cout << "After post-decrement: " << counter << std::endl;

    // Pre-decrement (--counter)
    std::cout << "Pre-decrement: " << --counter << std::endl;
    std::cout << "After pre-decrement: " << counter << std::endl;

    // ===== ORDER OF OPERATIONS (PEMDAS) =====
    std::cout << "\n===== ORDER OF OPERATIONS =====" << std::endl;

    int result1 = 5 + 3 * 2;  // Multiplication first
    std::cout << "5 + 3 * 2 = " << result1 << " (multiplication first)" << std::endl;

    int result2 = (5 + 3) * 2;  // Parentheses first
    std::cout << "(5 + 3) * 2 = " << result2 << " (parentheses first)" << std::endl;

    int result3 = 10 - 5 * 2 + 20 / 2;
    std::cout << "10 - 5 * 2 + 20 / 2 = " << result3 << std::endl;

    // ===== COMPOUND ASSIGNMENT OPERATORS =====
    std::cout << "\n===== COMPOUND ASSIGNMENT =====" << std::endl;

    int num = 10;
    std::cout << "Initial num: " << num << std::endl;

    num += 5;  // Same as: num = num + 5
    std::cout << "After num += 5: " << num << std::endl;

    num -= 3;  // Same as: num = num - 3
    std::cout << "After num -= 3: " << num << std::endl;

    num *= 2;  // Same as: num = num * 2
    std::cout << "After num *= 2: " << num << std::endl;

    num /= 4;  // Same as: num = num / 4
    std::cout << "After num /= 4: " << num << std::endl;

    num %= 3;  // Same as: num = num % 3
    std::cout << "After num %= 3: " << num << std::endl;

    // ===== WORKING WITH DOUBLES =====
    std::cout << "\n===== DOUBLES/FLOATS =====" << std::endl;

    double price = 19.99;
    double tax = 0.08;
    double total = price + (price * tax);
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Tax (8%): $" << (price * tax) << std::endl;
    std::cout << "Total: $" << total << std::endl;

    // ===== PRACTICE EXERCISES =====
    std::cout << "\n===== YOUR TURN =====" << std::endl;
    std::cout << "Try adding your own arithmetic examples below!" << std::endl;

    // TODO: Calculate area of a rectangle (length * width)
    int lenght = 15;
    int width = 26;
    int area = (lenght * width)/2;
    std::cout << "lenght: " << lenght << std::endl;
    std::cout << "width: " << width << std::endl;
    std::cout << "area: " << area << std::endl;
    // Todo: Calculate volume of a cube^3  
    // calculate volume of a cube (lenght * width * height)
    int height = 945;
    int length = 1456;
    int width = 9654;
    int volume = (length*width*height);
    std::cout << "volume: " << volume << std::endl;
    
    
    // TODO: Convert temperature from Celsius to Fahrenheit
    // Formula: F = (C * 9/5) + 32
    double celsius = 45;
    double fahrenheit = (celsius * 9/5) + 32;
    //int fahrenheit = (celsius * 9/5) + 32;
    std::cout << "celsius: " << celsius << "fahrenheit:" << fahrenheit << std::endl;
    
    

    // TODO: Calculate average of three numbers
    int num1 = 987;
    int num2 = 1876;
    int num3 = 9876;
    int average = (num1 + num2 + num3 )/3;
    std::cout << "average: " << average << std::endl;
    // TODO: Calculate discount (original price - discount percentage)
    double original_price = 76541.98; //what about float in this case or int
    double discount_percentage = 0.78;
    double discount = original_price - (original_price * discount_percentage);
    std::cout<< "discount;" << discount << std::endl;
    
    

    return 0;
}
