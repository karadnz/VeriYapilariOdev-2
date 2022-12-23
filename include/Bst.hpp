#ifndef BST_HPP
#define BST_HPP

#include <iostream>
#include "BSTNode.hpp"

using namespace std;

class BST
{
	private:

	BSTNode *root;

	void searchAndAdd(BSTNode *&subNode, Doku *doku); //subnode eklenilecek olan node eklenecek olan
	void	postOrder(BSTNode *subNode);
	int		getHeight(BSTNode *root);
	bool	isBalanced(BSTNode *root);

	public:

	BST();

	bool	isEmpty();
	void	add(Doku *doku);
	void	postOrder();

	bool	isBalanced();
	//void	clear();  EKLE

};

#endif