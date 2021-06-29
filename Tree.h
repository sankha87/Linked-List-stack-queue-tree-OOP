#pragma once
#include "TreeNode.h"
class Tree
{
	TreeNode *root;

public:
	Tree();
	~Tree();
	TreeNode* getRoot();
	void insert(int value);
	void inserIntoBST(int value);
	void insertIntoBSTrecursive(TreeNode *tn, TreeNode *newnode);
	void displayTree();
	void preorderTraversal(TreeNode *tn);
};

