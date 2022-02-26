#include <iostream>
#include "./Stack.h"

Stack::Stack(int size):
	size(size), top(-1) {
		arr = new int[size];
}

void Stack::push(int element) {
	if (top == size-1) {
		std::cout << "Stack Full! Overflow\n";
		return;
	}
    
    // increment the top
    top++;
    // insert element at top of array
    arr[top] = element;
    return;
}

int Stack::pop() {
    if (top == -1) {
        std::cout << "Stack is empty !\n";
        return -1;
    }
    
    // remove element from top
    int elem = arr[top];
    // decrement top pointer
    top--;
    return elem;
}

int Stack::peek() {
    if (top == -1) {
        std::cout << "Stack is empty !\n";
        return -1;
    }

    return arr[top];
}
