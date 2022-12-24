/**
* @file Queue.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
using namespace std;

class Queue
{
    private:

    int front;
    int back;
    int cap;
    int length;
    int *items;

    void reserve(int newCap);

    public:

    Queue();
    ~Queue();

    void clear();
    int count()const;
    bool isEmpty()const;
    const int& peek();

    void enqueue(const int& item);
    void dequeue();
    

};

#endif