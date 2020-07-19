#pragma once
#ifndef _NODE_H__
#define _NODE_H__
class node
{
private:
	int data;
	node* nextNode;

public:
	node();
	void setData(int iData);
	int getData() const;
	void setNextNode(node* nextNode);
	node* getNextNode() const;
};

#endif