#include <iostream>
#include "node.h"
#include "stack.h"
#include "queue.h"
int main() {
	stack* newStack = new stack();
	int num = 2;
	newStack->Push(10);
	newStack->Push(20);
	newStack->Push(30);
	newStack->Peek();
	newStack->Display();
	newStack->Pop(num);
	std::cout << std::endl;
	newStack->Display();

	std::cout << std::endl;
	queue* newQueue = new queue();
	newQueue->Enqueue(11);
	newQueue->Enqueue(22);
	newQueue->Enqueue(33);
	newQueue->Enqueue(44);
	newQueue->Dequeue(num);
	newQueue->Display();


	return 0;
}