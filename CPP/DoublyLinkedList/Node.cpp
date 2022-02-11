#include "iostream"
#include "./Node.h"

Node::Node(int element):
	data(element), prev(nullptr), next(nullptr){};

Node::~Node(){
	std::cout << "(Destructor) Node destroyed! \n";
}
