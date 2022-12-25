/**
* @file Radix.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#ifndef RADIX_HPP
#define RADIX_HPP

#include <cmath>
#include <iostream>
#include "Queue.hpp"

using namespace std;

class Radix
{
    private:
    
    int *numbers;
    int length;
    Queue **queues;
    int maxStep;

    int getMaxStepCount();
    int StepCount(int);
    int *QueueCurrentLengths();
    int power(int num);


    public:

    Radix(int* , int);
    int *sort();
    ~Radix();

};

#endif