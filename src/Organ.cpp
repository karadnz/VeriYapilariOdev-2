#include "Organ.hpp"


Organ::Organ()
{
    this->Tree = new BST();
}

Organ::Organ(BST *Tree)
{
    this->Tree = Tree;
}