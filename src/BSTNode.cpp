#include "BSTNode.hpp"

BSTNode::BSTNode(Doku *doku, BSTNode *right, BSTNode *left)
{
    this->data = doku->getMiddle();
    this->doku = doku;
    
    this->right = right;
    this->left  = left;
}

