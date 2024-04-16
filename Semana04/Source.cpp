#include<conio.h>
#include<iostream>

#include"Stack.h"
#include"Point.h"

using namespace std;

int main() {

	Stack<Point*>* pila;
	pila = new Stack<Point*>();

	pila->push(new Point(5, 4));
	pila->push(new Point(4, 4));
	pila->push(new Point(5, 3));


	Point* element;
	do
	{
		element = pila->pop();
		if (element != NULL) { cout << element->toString() << endl; }

	} while (element != NULL);



	_getch();
	return 0;
}