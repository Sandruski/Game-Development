#include <iostream>
using namespace std;
#include "DynamicArray.h"
#include "DoublyLinkedList.h"


int main() {
	List l;
	DynArray d;

	d.insert(0, 3);

	l.pushFront(1);
	l.pushFront(2);
	l.pushFront(3);
	l.pushFront(10);
	l.pushFront(5);

	cout << "List data:" << endl;
	l.print();

	cout << "Linked List data to a Dynamic Array:" << endl;
	//l.addData(d);
	d.print();

	cout << "Dynamic Array data to a Linked List:" << endl;
	d.addData(l);
	l.print();

	cout << endl;

	system("pause");
	return 0;
}