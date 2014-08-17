#pragma once
using namespace std;

template <class E>
class Queue
{
public:
	Queue(int maxSize=500);
	Queue(const Queue<E> &otherQueue);
	~Queue(void);

	void enqueue(const E &item);		// add to queue
	E dequeue(void);								// remove from queue
	inline int numElements(void);		// duh


protected:
	E *data;												// array of data
	const int MAX_NUM;							// array size + 1 ?
	int beginning,									// start and end of queue index in array
			end;
	int elemCount;									// num elements
};

