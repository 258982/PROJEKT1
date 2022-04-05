#pragma once
#include "StackBase.h"


template <typename T>
class ArrayStack :
	public StackBase<T>
{
public: ArrayStack(int init_max_size) {
	this->initial_max_size = init_max_size;
	initStack();
}

public:~ArrayStack()
{
	delete[] this->stack;
}

public:
	virtual void push(T value) {
		this->stack[this->current_size] = value;
		this->current_size++;

		if (isFull()) {
			doubleMaxSize();
		}
	}

	virtual T pop()
	{
		if (this->isEmpty()) {
			EmptyStackException err;
			throw err;
		}

		this->current_size--;

		return this->stack[this->current_size];
	}

	virtual T top()
	{
		if (this->isEmpty()) {
			EmptyStackException err;
			throw err;
		}

		return this->stack[this->current_size - 1];
	}

	virtual int size()
	{
		return this->current_size;
	}

	virtual int maxSize()
	{
		return this->max_size;
	}

	virtual bool isEmpty()
	{
		return this->current_size == 0 ? true : false;
	}

	virtual void clear()
	{
		delete[] this->stack;
		initStack();
	}

private:
	int initial_max_size;
	int max_size;
	T* stack;
	int current_size;

	void initStack()
	{
		this->current_size = 0;
		this->max_size = this->initial_max_size;
		this->stack = new T[initial_max_size];
	}

	void doubleMaxSize()
	{
		this->max_size *= 2;
		T* new_stack = new T[max_size];

		for (size_t i = 0; i < this->current_size; i++)
		{
			new_stack[i] = this->stack[i];
		}

		delete[] stack;

		stack = new_stack;
	}

	inline bool isFull()
	{
		return	this->current_size < this->max_size ? false : true;
	}
};

