#pragma once

template<class type>
class Node
{
public:
	Node(){}
	~Node(){}

	Node(type _value, Node<type>* _next = NULL) {
		data = _value;
		next = _next;
	}

	// se declara las variables
	type data;
	Node<type>* next;

};
