#pragma once
#include "node.h"

class queue // fifo
{
private:
	node* head2 = new node();
	
	int counter;
public:
	queue();
	~queue();
	void Enqueue(int _iData);
	bool Dequeue(int& _riData);
	bool Peek(int& _riData);
	bool isEmpty();
	void Display();
};

