#pragma once

template <typename T>
struct LinkedListNode
{
public: LinkedListNode() {};
public: LinkedListNode(T data, LinkedListNode* previous)
{
	this->data = data;
	this->previous = previous;
};

public:
	T data;
	LinkedListNode* previous;
};