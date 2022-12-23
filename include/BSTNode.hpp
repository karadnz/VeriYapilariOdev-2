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
};

#endif