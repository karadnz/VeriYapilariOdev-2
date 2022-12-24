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

    friend class Organizma;
    //~Hucre();

    //dash mi degilmi fonk.

    

};

#endif