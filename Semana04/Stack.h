#pragma once
#include"Node.h"

template<class type>
class Stack
{
public:
	Stack() { end = NULL; }
	~Stack(){}

	void push(type _value) {
		if (isEmpty()) { end = new Node<type>(_value); }
		else { end = new Node<type>(_value, end); }
	}

	type pop() {
		if (isEmpty()) return NULL;
		else { 
			type element = (type)(end->data); 
			end = (Node<type>*) end->next;
			return element;
		}
	}

	bool isEmpty() { return end == NULL; }

protected:
	Node<type>* end;
};
