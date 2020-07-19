#include "queue.h"
#include "node.h"
#include <iostream>
node* temp2 = new node();
queue::queue()
{
	counter = 0;
	head2->setNextNode(NULL);
}
queue::~queue()
{
	std::cout << "queue default constructor called" << std::endl;
}
void queue::Enqueue(int _iData) //add to end
{
	node* n = new node();
	n->setData(_iData);
	temp2 = head2;
	while (temp2->getNextNode() != NULL) {
		temp2 = temp2->getNextNode();
	}
	if (temp2->getNextNode() == NULL) {
		temp2->setNextNode(n);
	}
}

bool queue::Dequeue(int& _riData) //delete from front
{
	counter = _riData;
	if (isEmpty()) {
		std::cout << "stack is empty!";
		return false;
	}
	else {
		//while the stack is not empty 
		while (!isEmpty() && counter > 0) {
			//pop out 
			temp2 = head2->getNextNode();
			head2 = temp2;
			counter--;
		}
	}
}

bool queue::Peek(int& _riData)
{
	std::cout << "Queue Peek: " << head2->getData() << std::endl;;
	return false;
}

bool queue::isEmpty()
{
	temp2 = head2;
	if (temp2 == NULL) {
		return true;
	}
	else {
		return false;
	}
}

void queue::Display()
{
	temp2 = head2;
	std::cout << "Queue: ";
	while (temp2 != NULL) {
		std::cout << temp2->getData() << "   ";
		temp2 = temp2->getNextNode();
	}
}
