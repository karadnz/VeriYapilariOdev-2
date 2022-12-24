/**
* @file Organ.cpp
* @description cpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#include "Organ.hpp"


Organ::Organ()
{
    this->Tree = new BST();
}

Organ::Organ(BST *Tree)
{
    this->Tree = Tree;
}


Organ::~Organ()
{
    delete Tree;
}