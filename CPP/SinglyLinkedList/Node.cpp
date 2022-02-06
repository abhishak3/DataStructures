#include <iostream>
#include "./Node.h"

Node::Node(int data){
	this->data = data;
	this->next = nullptr;
}

Node::~Node(){
	std::cout << "(Destructor)Node Removed!\n";
}
