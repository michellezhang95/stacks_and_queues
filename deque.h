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

};



#endif