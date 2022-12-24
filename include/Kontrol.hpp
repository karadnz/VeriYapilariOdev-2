/**
* @file Kontrol.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#ifndef KONTROL_HPP
#define KONTROL_HPP

#include <iostream>
#include "Organizma.hpp"

using namespace std;

class Kontrol
{
    public:

    Organizma *organizma;

    Kontrol(Organizma *organizma);

    void mutate();

};

#endif