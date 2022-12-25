/**
* @file Sistem.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#ifndef SISTEM_HPP
#define SISTEM_HPP

#include <iostream>
#include "Organ.hpp"

using namespace std;

class Sistem
{
    public:

    Organ **organlar;

    int organCount;
    void addOrgan(Organ *node);

    Sistem  *next;
    Sistem  *prev;

    Sistem();
    ~Sistem();

    friend class Organizma;

};

#endif