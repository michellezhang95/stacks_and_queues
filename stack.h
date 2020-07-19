#pragma once
#include "node.h"
#ifndef __STACK_H__
#define __STACK_H__

class stack
{
private:
	node* head;
	int counter;
public:
	stack();
	~stack();
	void Push(int _iData);
	bool Pop(int& _riData);
	bool Peek();
	bool isEmpty();
	void Display();

};

#endif // !