#pragma once
#include "StackBase.h"
#include "LinkedListNode.h"

template <typename T>
class LinkedListStack :
	public StackBase<T>
{
public: LinkedListStack() {
	this->current_size = 0;
}

public:
	virtual void push(T value) {
		LinkedListNode<T>* node = new LinkedListNode<T>();
		if (this->isEmpty())
		{
			(*node).data = value;
			(*node).previous = NULL;
		}
		else
		{
			(*node).data = value;
			(*node).previous = this->top_node;
		}

		this->top_node = node;
		this->current_size++;
	}

	virtual T pop()
	{
		if (this->isEmpty()) {
			EmptyStackException err;
			throw err;
		}

		this->current_size--;

		LinkedListNode<T> t_node = *this->top_node;
		if (!this->isEmpty())
		{
			this->top_node = (*this->top_node).previous;
		}
		else
		{
			this->clear();
		}

		return t_node.data;
	}

	virtual T top()
	{
		if (this->isEmpty()) {
			EmptyStackException err;
			throw err;
		}

		return (*this->top_node).data;
	}

	virtual int size()
	{
		return this->current_size;
	}

	virtual int maxSize()
	{
		return this->current_size;
	}

	virtual bool isEmpty()
	{
		return this->current_size == 0 ? true : false;
	}

	virtual void clear()
	{
		this->current_size = 0;
		this->top_node = NULL;
	}

private:
	int current_size;
	LinkedListNode<T>* top_node;
};
