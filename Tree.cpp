#include "Tree.h"
#include<iostream>
using namespace std;
Tree::Tree()
{
	this->root = new TreeNode();
}


Tree::~Tree()
{
}

TreeNode * Tree::getRoot()
{
	return this->root;
}

void Tree::insert(int value)
{
	TreeNode *newnode = new TreeNode(value);
	insertIntoBSTrecursive(this->root, newnode);
}

void Tree::inserIntoBST(int value)
{
	TreeNode *curr = root;
	if (curr->getData() == 0 && curr->getLeft() == NULL && curr->getRight() == NULL)
	{
		curr->setData(value);
	}
	else
	{
		TreeNode *newnode = new TreeNode(value);
		while (curr->getData() > value || curr->getLeft() != NULL)
			if(curr->getData() < value)
			curr = curr->getLeft();
		curr->setLeft(newnode);
	
		/*if (curr->getData() > value)
			curr->setLeft(newnode);
		else
			curr->setRight(newnode);*/
	}
}

void Tree::insertIntoBSTrecursive(TreeNode * tn, TreeNode *newnode)
{
	if (tn == NULL)
		tn = newnode;
	else if (tn->getData() > newnode->getData())
	{
		insertIntoBSTrecursive(tn->getLeft(), newnode);
	}
	else
	{
		insertIntoBSTrecursive(tn->getRight(), newnode);
	}
}

void Tree::displayTree()
{
	TreeNode *temp;
	temp = root;
	cout << " root : " << temp->getData() << endl;
	while (temp->getLeft() != NULL)
	{
		cout << " left : " << temp->getLeft()->getData() << endl;
		temp = temp->getLeft();
	}
	temp = root;
	while (temp->getRight() != NULL)
	{
		
		cout << " right : " << temp->getRight()->getData() << endl;
		temp = temp->getRight();
	}
	}

void Tree::preorderTraversal(TreeNode * tn)
{
	cout << tn->getData();
	if (tn != NULL) {
		preorderTraversal(tn->getLeft());
		preorderTraversal(tn->getRight());
	}
}

