#pragma once

template <class E>
class Stack
{
public:
	Stack(int maxSize=500);
	Stack(const Stack<E> &otherStack);
	~Stack(void);

	bool push(E item);
	E pop(void);
	inline int numElements(void);

protected:
	E *data;
	int top;
	const int MAX_NUM;
};

