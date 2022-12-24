/**
* @file Doku.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
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

    void addHucre(Hucre *);
    int getWordCount(string);
    void    printDoku();
    int     getMiddle();
    int*    returnMutated();
    void    mutate();
    int*    returnArr();

    Doku(int *,int); //array yollayarak
    Doku(int);  //size
    Doku(string); //line
    ~Doku();

};

#endif