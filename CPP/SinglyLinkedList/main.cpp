#include <iostream>
#include "./SinglyLL.h"

int main(){
	SinglyLL ll;
	ll.pushFront(1);
	ll.pushFront(2);
	ll.pushFront(4);
	ll.pushFront(3);
	ll.pushFront(1);
	ll.pushFront(7);
	ll.pushLast(69);
	ll.display();
	ll.pushAtIndex(-10,100);
	ll.display();
	ll.popFront();
	ll.display();
	std::cout << "Popping from last: " << ll.popLast() << "\n";
	ll.display();
	std::cout << "Popping from index 3 : " << ll.popAtIndex(3) << "\n";
	ll.display();
}
