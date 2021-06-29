#include "Node.h"
#include"Stack.h"
#include "Queue.h"
#include "Tree.h"
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void main()
{
	Stack *s1 = new Stack();
	
	cout<< s1->top()<<" ";
	s1->push(3);
	cout << s1->top()<< " ";
	s1->push(4);
	cout << s1->top()<<" ";
	cout << endl;
	s1->pop();
	cout<<s1->top()<<" ";
	cout << endl;
	Queue *q1 = new Queue();
	cout <<"\nQueue Front : "<< q1->front() << " Queue Rear "<<q1->rear();
	q1->enqueue(5);
	cout << "\nQueue Front : " << q1->front() << " Queue Rear " << q1->rear();
	q1->enqueue(6);
	q1->enqueue(7);
	cout << "\nQueue Front : " << q1->front() << " Queue Rear " << q1->rear();
	q1->dequeue();
	cout << "\nQueue Front : " << q1->front() << " Queue Rear " << q1->rear();

//	Tree *t = new Tree();
//	t->displayTree();
	//t->inserIntoBST(3);
	//t->displayTree();
	//cout << endl;
	//t->inserIntoBST(5);
	//t->displayTree();
	//cout << endl;
	//t->inserIntoBST(1);
	//t->displayTree();
	//cout << endl;
	//t->inserIntoBST(2);
	//t->displayTree();

	//t->insert(4);
	//t->insert(1);
	//t->insert(6);
	//t->preorderTraversal(t->getRoot());
	_getch();

}