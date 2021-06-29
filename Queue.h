#pragma once
#include "LinkedList.h"
class Queue
{
	LinkList *L1;
public:
	Queue();
	~Queue();
	void enqueue(int);
	void dequeue();
	int front();
	int rear();
};

