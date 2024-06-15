#include <iostream>
#include "io.h"

int readNumber(){
    int number{};
    std::cout << "Introduce an integer number: ";
    std::cin >> number;
    return number;
}

void writeAnswer(int number){
   std::cout << "The sum of the numbers is " << number << std::endl; 
}