#include "stack.h"
#include "node.h"
#include <iostream>

node* temp;
node* firstNode = new node();

stack::stack()
{
	counter = 0;
	
}

stack::~stack()
{
	std::cout << "stack default destructor called";
}

void stack::Push(int _iData) // insert at front 
{
	node* n = new node();
	n->setData(_iData);
	n->setNextNode(head); //set current head as next node to push it along
	head = n;
	
}

bool stack::Pop(int& _riData) // delete from front, pop a number of nodes from the stack
{
	//check if it is empty before popping 
	//if empty return false 
	counter = _riData;
	if (isEmpty()) {
		std::cout << "stack is empty!";
		return false;
	}
	else {
		//while the stack is not empty 
		while (!isEmpty() && counter > 0) {
			//pop out 
			temp = head->getNextNode();
			head = temp;
			counter--;
		}
	}
	
}

bool stack::Peek()
{
	std::cout << "Stack Peek: " << head->getData() << std::endl;;
	return false;
}

bool stack::isEmpty()
{
	temp = head;
	if (temp == NULL) {
		return true;
	}
	else {
		return false;
	}
	
}

void stack::Display()
{
	temp = head;
	std::cout << "Stack: ";
	while (temp != NULL) {
		std::cout << temp->getData() << "   ";
		temp = temp->getNextNode();
	}
}


