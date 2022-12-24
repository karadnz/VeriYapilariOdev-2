#ifndef BST_HPP
#define BST_HPP

#include <iostream>
#include "BSTNode.hpp"
#include "Radix.hpp"

using namespace std;

class BST
{
	private:

	BSTNode *root;

	void searchAndAdd(BSTNode *&subNode, Doku *doku); //subnode eklenilecek olan node eklenecek olan
	void	postOrder(BSTNode *subNode);
	int		getHeight(BSTNode *root);
	bool	isBalanced(BSTNode *root);
	void	fillMutated(BSTNode *subNode,Doku **mutatedDokular,int &index);

	

	public:

	BST();

	bool	isEmpty();
	void	add(Doku *doku);
	void	postOrder();

	bool	isBalanced();
	bool	shouldMutate();
	
	Doku**	returnMutated();
	//void	clear();  EKLE

};

#endif