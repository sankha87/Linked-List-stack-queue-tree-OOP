#include "Queue.h"



Queue::Queue()
{
	this->L1 = new LinkList();
}


Queue::~Queue()
{
}

void Queue::enqueue(int val)
{
	this->L1->append(val);
}

void Queue::dequeue()
{
	this->L1->deleteBeginning();
}

int Queue::front()
{
	return this->L1->getHead()->getData();
}

int Queue::rear()
{
	return this->L1->getLast()->getData();
}
