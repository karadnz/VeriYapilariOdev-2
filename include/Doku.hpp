#ifndef DOKU_HPP
#define DOKU_HPP

#include <iostream>
#include "Hucre.hpp"

using namespace std;

class Doku
{
    private:

    Hucre   *Hucreler;
    int     hucreCount;
    int     size;

    // Doku    *next;
    // Doku    *prev;

    public:

    void addHucre(Hucre);

    void printDoku();
    Doku(int);
    //~Doku();

    

};

#endif