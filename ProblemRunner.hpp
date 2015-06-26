/* 
 * File:   ProblemRunner.hpp
 * Author: stii
 *
 * Created on 25 June 2015, 9:09 AM
 */

#ifndef PROBLEMRUNNER_HPP
#define	PROBLEMRUNNER_HPP

#include <string>

class ProblemRunner {
public:
    ProblemRunner(int problem);
    ProblemRunner(const ProblemRunner& orig);
    virtual ~ProblemRunner();
    void run();
private:
    int pr_problem;
};

#endif	/* PROBLEMRUNNER_HPP */

