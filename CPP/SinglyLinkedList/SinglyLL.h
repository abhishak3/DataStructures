#ifndef SINGLY_LL_H_
#define SINGLY_LL_H_

#include "./Node.h"

class SinglyLL{
	private:
		Node* head;
	public:
		SinglyLL();
		void pushFront(int element);
		void pushLast(int element);
		void pushAtIndex(int index, int element);
		int getElement(int index);
		int popFront();
		int popLast();
		int popAtIndex(int index);
		void display();
};

#endif
