/* 
 * File:   Problem1.hpp
 * Author: stii
 *
 * Created on 25 June 2015, 5:18 PM
 */

#ifndef PROBLEM1_HPP
#define	PROBLEM1_HPP
#include <string>

class Problem1 {
public:
    Problem1();
    Problem1(const Problem1& orig);
    virtual ~Problem1();
    void constructSolution();
private:
    std::string problemDescription;
    std::string problemSolution;
    int problemAnswer;
    int calculate();
};

#endif	/* PROBLEM1_HPP */

