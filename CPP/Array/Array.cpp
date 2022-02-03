#include <iostream>

#include "Array.h"

Array::Array(int size):size(size){
	arr = new int[this->size]; // allocating integer array of size provided
	std::cout << "Array allocated of size: " << this->size << std::endl;
}

int Array::getElement(int index){
	if(index>=size){
		std::cout << "Index Out of Bounds." << std::endl;
		return -1;
	} 
	else if(index<0){
		std::cout << "Negative Index Provided" << std::endl;
		return -1;
	} 
	else{
		int* ptr = arr;
		ptr += index; //adding the index to the pointer pointing to base addr.
		return *ptr;
	}
}

void Array::insertElement(int index, int element){
	if(index>=size) std::cout << "Index Out of Bounds." << std::endl;
	else if(index<0) std::cout << "Negative Index Provided" << std::endl;
	else{
		for(int i = size-1; i > index; i--){
			arr[i] = arr[i-1];
		}
		arr[index] = element;
	}
}

void Array::removeElement(int index){
	if(index>=size) std::cout << "Index Out of Bounds." << std::endl;
	else if(index<0) std::cout << "Negative Index Provided" << std::endl;
	else{
		int i{0};
		for(i = index; i < size-1; i++){
			arr[i] = arr[i+1];
		}
		arr[i] = 0;
	}
}

void Array::display(){
	std::cout << "[";
	for(int i = 0; i < size; i++){
		std::cout << *(arr+i) << ", ";
	}
	std::cout << "\b\b]" << std::endl;
}
