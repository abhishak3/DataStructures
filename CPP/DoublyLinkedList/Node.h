#ifndef NODE_H_
#define NODE_H_

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		Node(int element);
		~Node();
};

#endif
