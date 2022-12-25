/**
* @file BSTNode.hpp
* @description header file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#ifndef BSTNODE_HPP
#define BSTNODE_HPP

#include "Doku.hpp"

class BSTNode
{
    public:

    Doku *doku;
    int data;

    int height;

    BSTNode *right;
    BSTNode *left;
    
    BSTNode(Doku *, BSTNode * = NULL, BSTNode * = NULL);
    ~BSTNode();
};

#endif