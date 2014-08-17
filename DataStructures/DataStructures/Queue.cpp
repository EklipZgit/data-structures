#include "stdafx.h"
#include "Queue.h"

template <class E>
Queue<E>::Queue(int maxSize) : MAX_NUM (maxSize)			//inits constant
{
	data = new E[MAX_NUM + 1];
	beginning = 0;
	end = 0;
	elemCount = 0;
}


template <class E>
Queue<E>::Queue(const Queue &otherQueue) : MAX_NUM (otherQueue.MAX_NUM)			//inits constant
{
	beginning = otherQueue.beginning;
	end = otherQueue.end;
	elemCount = otherQueue.elemCount;

	data = new E[MAX_NUM + 1];
	for (int i = 0; i < MAX_NUM; i++)
		data[i] = otherQueue.data[i];
}


template <class E>
Queue<E>::~Queue(void)
{
	delete[] data;
}



template <class E>
Queue<E>::enqueue(const E &item)
{
	data[end++] = item;
	++elemCount;

	if (end > MAX_NUM)
		end -= (MAX_NUM + 1);
}



template <class E>
E Queue<E>::dequeue(void)
{
	E returnVal = data[beginning++];
	--elemCount;

	if (beginning > MAX_NUM)
		beginning -= (MAX_NUM + 1);
	
	return returnVal;
}



template <class E>
inline int Queue<E>::numElements(void)
{
	return elemCount;
}