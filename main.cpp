#include <iostream>
#include "node.h"
#include "stack.h"
int main() {
	stack* newStack = new stack();
	newStack->Push(10);
	newStack->Push(20);
	newStack->Push(30);
	newStack->Peek();
	newStack->Display();
	newStack->Pop(1);
	std::cout << std::endl;
	newStack->Display();

	return 0;
}