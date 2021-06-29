#pragma once
#ifndef NODE_H
#define NODE_H

class Node
{
	int data;
	Node* next;
public:
	Node();
	Node(int);
	int getData();
	Node* getNext();
	void setData(int);
	void setNext(Node *);
	~Node();
};

#endif // !NODE_H
