#ifndef DOKU_HPP
#define DOKU_HPP

#include <iostream>
#include "Hucre.hpp"
#include <sstream>

using namespace std;

class Doku
{
    public:

    Hucre   **Hucreler; //hucre pointerlerini tutan bir array
    int     hucreCount;
    int     size;

    // Doku    *next;
    // Doku    *prev;


    void addHucre(Hucre *);
    int getWordCount(string);

    void    printDoku();
    int     getMiddle();

    Doku(int *,int); //array yollayarak
    Doku(int);  //size
    Doku(string); //line
    //~Doku();

    

};

#endif