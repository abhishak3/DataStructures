#include <iostream>
#include "DynamicArray.h"

int main(){
	std::cout << "Allocating dynamic array of capacity 4\n";
	DynamicArray arr(4);

	arr.pushBack(2);
	arr.pushBack(3);
	arr.pushBack(4);
	arr.pushBack(5);
	arr.pushBack(6);
	arr.pushBack(7);

	arr.display();
	std::cout << "Current capacity is: " << arr.getCapacity() << std::endl;
	std::cout << "Current size is: " << arr.getSize() << std::endl;

	std::cout << "Element at arr[3]: " << arr.getElement(3) << std::endl;

	std::cout << "Removing element from index 3..." << std::endl;
	arr.remove(3);
	arr.display();

	std::cout << "Setting element at index 3 to 69" << std::endl;
	arr.setElement(3, 69);
	arr.display();

	return 0;
}
