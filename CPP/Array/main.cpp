#include <iostream>

#include "Array.h"

using namespace std;

int main(){
	Array a(6);

	a.insertElement(0, 1);
	a.insertElement(1, 2);
	a.insertElement(2, 3);
	a.insertElement(3, 4);
	a.insertElement(4, 5);
	a.insertElement(5, 6);

	a.display();

	a.removeElement(3);
	a.removeElement(3);
	a.removeElement(3);
	std::cout << "After removing element from index 3. 3 times" << std::endl;
	a.display();

	std::cout << "Element at 2nd index is " << a.getElement(2) << std::endl;
}
