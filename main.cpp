/* 
 * File:   main.cpp
 * Author: stii
 *
 * Created on 25 June 2015, 9:04 AM
 */

#include <cstdlib>
#include <iostream>
#include "ProblemRunner.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int problemNumber = 0;
    std::cout << "Please enter a problem number: ";
    std::cin >> problemNumber;
    
    ProblemRunner *runner = new ProblemRunner(problemNumber);
    runner->run();
    return 0;
}

