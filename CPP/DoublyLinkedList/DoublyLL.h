#ifndef DOUBLYLL_H_
#define DOUBLYLL_H_

#include "./Node.h"

class DoublyLL{
	private:
		Node* head;
	public:
		DoublyLL();
		void pushFront(int element);
		void pushLast(int element);
		void pushAtIndex(int index, int element);
		int popFront();
		int popLast();
		int popAtIndex(int index);
		void display();
};

#endif
