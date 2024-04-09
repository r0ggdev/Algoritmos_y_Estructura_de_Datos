#include"Lista.h"
#include<iostream>


int main() {

    LinkedList<int>* lst = new LinkedList<int>(); //instancia de un clase
    lst->addInitial(50);
    lst->addInitial(40);
    lst->addInitial(30);
    lst->addPosition(10, 0);
    lst->addPosition(20, 1);
    lst->addPosition(60, 5);
    lst->addPosition(70, 6);
    lst->addPosition(80, 8);

    for (int i = 0; i < lst->listLength(); i++)
        cout << lst->getPosition(i) << endl;

    cout << lst->listLength() << endl;
    cout << lst->getInitial() << endl;
    cout << lst->getPosition(0) << endl;
    cout << lst->getPosition(1) << endl;
    cout << lst->getPosition(3) << endl;
    cout << lst->getPosition(5) << endl;
    cout << lst->getPosition(6) << endl;
    cout << lst->getPosition(7) << endl;
    cout << lst->getPosition(10) << endl;
    cout << lst->getEnd() << endl;
    cout << lst->search(40);

    system("\npause>>null");
	return 0;
}