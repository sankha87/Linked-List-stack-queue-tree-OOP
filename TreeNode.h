#pragma once
class TreeNode
{
	int data;
	TreeNode *left;
	TreeNode *right;
public:
	TreeNode(int value);
	TreeNode();
	~TreeNode();
	TreeNode* getLeft();
	TreeNode* getRight();
	void setLeft(TreeNode *L);
	void setRight(TreeNode *R);
	int getData();
	void setData(int value);
};

