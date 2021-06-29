#pragma once
#include "Node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkList
{
	Node* head;
public:
	LinkList();
	~LinkList();
	void Display();
	void append(int data);
	void append_beginning(int data);
	void merge(LinkList*);
	Node* getHead();
	Node* getLast();
	void addBefore(int value, int data);
	void addAfter(int value, int data);
	void deleteBeginning();
	void deleteEnd();
	void deleteAny(int value);
};

#endif // !LINKEDLIST_H