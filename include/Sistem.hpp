#ifndef SISTEM_HPP
#define SISTEM_HPP

#include <iostream>
#include "Organ.hpp"

using namespace std;

class Sistem
{
    private:

    Organ **organlar;

    int size;
    void addOrgan(Organ *node);

    Sistem  *next;
    Sistem  *prev;

    public:


    Sistem();

    friend class Organizma;
    //~Hucre();

    //dash mi degilmi fonk.

    

};

#endif