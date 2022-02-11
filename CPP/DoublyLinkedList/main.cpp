#include <iostream>
#include "DoublyLL.h"

int main(){
	DoublyLL ll;
	std::cout << "Doubly LInked List created...\n";
	std::cout << "Pushing 1 in front 3 times...\n";
	ll.pushFront(1);
	ll.pushFront(1);
	ll.pushFront(1);
	ll.display();
	std::cout << "Pushing 69 in last...\n";
	ll.pushLast(69);
	ll.display();
	std::cout << "Pushing 4 at index 4...\n";
	ll.pushAtIndex(4,4);
	ll.display();
	std::cout << "Popping from front...\n";
	ll.popFront();
	ll.display();
	std::cout << "Popping from last...\n";
	ll.popLast();
	ll.display();
	std::cout << "Popping from index 2...\n";
	ll.popAtIndex(2);
	ll.display();
}
