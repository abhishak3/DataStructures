#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray(int size): 
	capacity_(size), size(0){
		arr = new int[capacity_];
	}

int DynamicArray::getElement(int index){
	// checking for valid indexes
	if(index < 0 || index >= size){
		std::cout << "Index Out Of Bounds !" << std::endl;
		return -1;
	}
	// using pointer arithmetic
	return *(arr+index);
}

void DynamicArray::setElement(int index, int element){
	//checking for valid indexes
	if(index < 0 || index >= size){
		std::cout << "Index Out Of Bounds !" << std::endl;
		return;
	}

	//assigning element using pointer arithmetic
	*(arr+index) = element;
}

void DynamicArray::pushBack(int element){
	// if array is full
	if(size >= capacity_){
		int* newarr = new int[2*capacity_];
		
		//copying elements for old arr to new one.
		for(int i = 0; i < size; i++) newarr[i] = arr[i];

		delete[] arr; // deallocating memory
		arr = newarr; // array pointing to new array
		capacity_ = 2*capacity_; // changing capacity to it's double
	}
	*(arr+size) = element; // using pointer arithmetic
	size++;
}

void DynamicArray::remove(int index){
	// checking for  valid indexes
	if(index < 0 || index >= size){
		std::cout << "Index Out Of Bounds 1" << std::endl;
		return;
	}

	//shifting elements
	for(int i = index; i < size-1; i++){
		arr[i] = arr[i+1];
	}
	arr[size-1] = 0; // assigning zero to last element
}

void DynamicArray::display(){
	std::cout << "[";
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b]" << std::endl;
}

int DynamicArray::getSize(){
	return size;
}

int DynamicArray::getCapacity(){
	return capacity_;
}
