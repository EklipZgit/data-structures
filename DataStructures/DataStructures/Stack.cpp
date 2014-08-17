#include "stdafx.h"
#include "Stack.h"
template <class E>
class Stack {
public:
	Stack(int maxSize) : MAX_SIZE (maxSize)
	{
		data = new E[MAX_NUM + 1];
		top = -1;
	}


	Stack(const Stack<E> &otherStack) : MAX_SIZE (otherStack.MAX_SIZE)
	{
		top = otherStack.top;
		data = new E[MAX_NUM];
		for (int i = 0; i < MAX_NUM; i++)
			data[i] = otherStack[i];
	}


	~Stack(void)
	{
		delete[] data;
	}


	bool push(E item)
	{
		if (top <= MAX_NUM)
			data[++top] = item;
		else 
			return false;
		return true;
	}



	E pop(void)
	{
		if (top >= 0)
			return data[top--];
		else 
			return NULL;
	}



	inline int numElements(void) {
		return top + 1;
	}



	inline int maxElements(void) {
		return MAX_NUM;
	}
};
//template <class E>
//Stack<E>::Stack(int maxSize) : MAX_SIZE (maxSize)
//{
//	data = new E[MAX_NUM + 1];
//	top = -1;
//}
//
//
//template <class E>
//Stack<E>::Stack(const Stack<E> &otherStack) : MAX_SIZE (otherStack.MAX_SIZE)
//{
//	top = otherStack.top;
//	data = new E[MAX_NUM];
//	for (int i = 0; i < MAX_NUM; i++)
//		data[i] = otherStack[i];
//}
//
//
//template <class E>
//Stack<E>::~Stack(void)
//{
//	delete[] data;
//}
//
//
//template <class E>
//bool Stack<E>::push(E item)
//{
//	if (top <= MAX_NUM)
//		data[++top] = item;
//	else 
//		return false;
//	return true;
//}
//
//
//template <class E>
//E Stack<E>::pop(void)
//{
//	if (top >= 0)
//		return data[top--];
//	else 
//		return NULL;
//}
//
//
//template <class E>
//inline int Stack<E>::numElements(void) {
//	return top + 1;
//}