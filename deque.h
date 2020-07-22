#pragma once
#include "queue.h"
#ifndef _DEQUE_H__
#define _DEQUE_H__

class deque:public queue {
private:


public:
	deque();
	~deque();
	using queue::Enqueue;
	using queue::Dequeue;
	using queue::Peek;
	int Peek_Back();
	void Enqueue_Back(int _iData);
	void Dequeue_Back();
	bool IsEmpty();
};



#endif