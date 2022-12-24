/**
* @file BSTNode.cpp
* @description cpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#include "BSTNode.hpp"

BSTNode::BSTNode(Doku *doku, BSTNode *right, BSTNode *left)
{
    this->data = doku->getMiddle();
    this->doku = doku;
    
    this->right = right;
    this->left  = left;
}

BSTNode::~BSTNode()
{
    delete doku;
}