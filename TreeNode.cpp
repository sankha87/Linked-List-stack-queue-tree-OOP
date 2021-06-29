#include "TreeNode.h"
#include<iostream>


TreeNode::TreeNode(int value)
{
	this->data = value;
	this->left = NULL;
	this->right = NULL;
}

TreeNode::TreeNode()
{
	this->data = 0;
	this->left = NULL;
	this->right = NULL;
}



TreeNode::~TreeNode()
{
}

TreeNode* TreeNode::getLeft()
{
	return this->left;
}

TreeNode* TreeNode::getRight()
{
	return this->right;
}

void TreeNode::setLeft(TreeNode * L)
{
	this->left = L;
}

void TreeNode::setRight(TreeNode * R)
{
	this->right = R;
}

int TreeNode::getData()
{
	return this->data;
}

void TreeNode::setData(int value)
{
	this->data = value;
}
