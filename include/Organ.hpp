/**
* @file Organ.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#ifndef ORGAN_HPP
#define ORGAN_HPP

#include <iostream>
#include "BST.hpp"

using namespace std;

class Organ
{
    public:

    BST *Tree;

    Organ();
    Organ(BST *);
    ~Organ();

};

#endif