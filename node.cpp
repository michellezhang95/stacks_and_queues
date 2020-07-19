#include "node.h"
//written by Michelle Zhang
//Constructor
node::node() {
	data = 0;
	nextNode = nullptr;
}

// set the value within the node
void node::setData(int iData) {
	data = iData;
}

// get data within the node
int  node::getData() const {
	return data;
}

//set the next node the current node points to
void node::setNextNode(node* p_nextNode) {
	nextNode = p_nextNode;
}

//get the address of the next node the current node points to
node* node::getNextNode() const {
	return nextNode;
}