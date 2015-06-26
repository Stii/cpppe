/* 
 * File:   Problem1.cpp
 * Author: stii
 * 
 * Created on 25 June 2015, 5:18 PM
 */

#include "Problem1.hpp"
#include <iostream>
#include <string>

Problem1::Problem1() {
}

Problem1::Problem1(const Problem1& orig) {
}

Problem1::~Problem1() {
}

void Problem1::constructSolution() {
    std::string description = "If we list all the natural numbers "
    "below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of "
    "these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.";
    std::string solution = "The sum of all the multiples of 3 or 5 "
    "below 1000 equals ";
    
    int answer = this->calculate();
    
    std::cout << "Problem Description" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << description << std::endl << std::endl;
    
    std::cout << "Problem Solution" << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << solution << answer << std::endl;
}

int Problem1::calculate() {
    int sum_i = 0;
    for (int i = 0; i <= 1000; i++) {
        if ((i % 15 == 0) || (i % 3 == 0) || (i % 5 == 0)) {
            sum_i += i;
        } 
    }
    return sum_i;
}