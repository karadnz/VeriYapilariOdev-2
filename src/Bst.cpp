#include "BST.hpp"
#include "BSTNode.hpp"
#include "Doku.hpp"

#include <iomanip>
#include <iostream>
#include <cmath>
#include <queue>
using namespace std;


BST::BST()
{
    this->root = NULL;
}


bool BST::isEmpty()
{
    return (root == NULL);
}

void BST::searchAndAdd(BSTNode *&subNode, Doku *doku)
{
    if(subNode == NULL)
    {
        subNode = new BSTNode(doku);
    }

    else if (doku->getMiddle() <= subNode->data)
    {
        searchAndAdd(subNode->left, doku);
    }

    else if (doku->getMiddle() > subNode->data)
    {
        searchAndAdd(subNode->right, doku);
    }
    
}

void BST::add(Doku *doku)
{
    searchAndAdd(root, doku);
}

void BST::postOrder(BSTNode *subNode)
{
    if (subNode != NULL)
    {
        postOrder(subNode->left);
        postOrder(subNode->right);
        cout << subNode->data << " ";
    }
}

void BST::postOrder()
{
    postOrder(root);
}


int BST::getHeight(BSTNode *root)
{
    if (root == NULL)
    {
        return (0);
    }

    return (max(getHeight(root->left), getHeight(root->right)) + 1);

}

bool BST::isBalanced()
{
    return (isBalanced(root));
}

bool BST::isBalanced(BSTNode *root)
{
    if (root == NULL)
    {
        return (true);
    }

    int heightDiff = abs(getHeight(root->left) - getHeight(root->right));

    if (heightDiff > 1)
    {
        return (false);
    }

    else
    {
        return (isBalanced(root->left) && isBalanced(root->right));
    }
}


bool BST::shouldMutate()
{
    return ((this->root->data % 50) == 0);
}





Doku** BST::returnMutated()
{
    Doku **mutatedDokular = new Doku*[20];
    // int *index = new int;
    // *index = 0;

    int index = 0;
    fillMutated(root,mutatedDokular,index);

    return(mutatedDokular);

    
}


void BST::fillMutated(BSTNode *subNode,Doku **mutatedDokular,int &index)
{
    if (subNode != NULL)
    {
        fillMutated(subNode->left,mutatedDokular,index);
        fillMutated(subNode->right,mutatedDokular,index);
        subNode->doku->mutate();
        mutatedDokular[index] = subNode->doku;
        //*index = *index + 1;
        index++;
        
    }
}