#pragma once
#include "exception"

template <typename T>
class StackBase
{
public:
	virtual void push(T value) {};
	virtual T pop() { T result; return result; };
	virtual T top() { T result; return result; };
	virtual int size() { return 0; };
	virtual int maxSize() { return 0; };
	virtual bool isEmpty() { return true; };
	virtual void clear() {};
};

class EmptyStackException : public std::exception
{
public:
	char * what()
	{
		return "Empty stack";
	}
};