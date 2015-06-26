/* 
 * File:   ProblemRunner.cpp
 * Author: stii
 * 
 * Created on 25 June 2015, 9:09 AM
 */

#include <iostream>
#include "ProblemRunner.hpp"
#include "Problem1.hpp"

ProblemRunner::ProblemRunner(int problem) {
    pr_problem = problem;
}

ProblemRunner::ProblemRunner(const ProblemRunner& orig) {
}

ProblemRunner::~ProblemRunner() {
}

void ProblemRunner::run() {
    switch (pr_problem) {
        case 1: {
            std::cout << "Running problem one" << std::endl;
            Problem1 *problem = new Problem1();
            problem->constructSolution();
            break;
        }
        default: {
            std::cout << "Please enter the problem number" << std::endl;
            break;
        }
    }
}