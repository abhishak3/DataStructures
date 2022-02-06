#include <iostream>
#include "./SinglyLL.h"
#include "./Node.h"

SinglyLL::SinglyLL():
	head(nullptr){};

void SinglyLL::pushFront(int element){
	/*
	 * NOTE:
	 * can't create node object here as it will be
	 * destroyed as soon as execution pointer exits 
	 * this function.
	 * that's why we created new Node() on heap.
	 * now pointer will be deleted not the object
	 */
	Node* node = new Node(element); 
	node->next = head;
	head = node;
}

void SinglyLL::pushLast(int element){
	Node* node = new Node(element);
	if(head == nullptr){
		node->next = head;
		head = node;
	}else{
		Node* ptr = head;
		while(ptr->next != nullptr){
			ptr = ptr->next;
		}
		ptr->next = node;
	}
}

void SinglyLL::pushAtIndex(int index, int element){
	if(index<0){
		std::cout << "Negative Index not allowed!\n";
		return;
	}
	Node* node = new Node(element);
	int count{0};
	if(index == 0){
		node->next = head;
		head = node;
	}
	else{
		Node* ptr = head;
		while(count+1 != index){
			ptr = ptr->next;
			count++;
			// checking for Index Out Of Bounds
			if(ptr == nullptr){
				std::cout << "Index Out Of Bounds!\n";
				return;
			}
		}
		node->next = ptr->next;
		ptr->next = node;
	}
}

int SinglyLL::getElement(int index){
	if(index < 0){
		std::cout << "Negative Index not allowed!\n";
		return -1;
	}
	Node* ptr = head;
	int i{0};
	while(i != index){
		ptr = ptr->next;
		i++;
		if(ptr == nullptr){
			std::cout << "Index Out Of Bounds!\n";
			return -1;
		}
	}
	return ptr->data;
}

int SinglyLL::popFront(){
	if(head == nullptr){
		std::cout << "Can't remove from empty list.\n";
		return -1;
	}
	int data{0};
	Node* temp = head;
	head = temp->next;
	data = temp->data;
	delete temp;
	return data;
}

int SinglyLL::popLast(){
	if(head == nullptr){
		std::cout << "Can't remove from empty list.\n";
		return -1;
	}
	int data{0};
	Node* prev = head;
	Node* ptr = prev->next;
	if(ptr == nullptr){
		head = nullptr;
		data = prev->data;
		delete prev;
		return data;
	}
	else{
		while(ptr->next != nullptr){
			prev = prev->next;
			ptr = prev->next;
		}
		prev->next = nullptr;
		data = ptr->data;
		delete ptr;
		return data;
	}
}

int SinglyLL::popAtIndex(int index){
	if(index < 0){
		std::cout << "Negative index not allowed!\n";
		return -1;
	}
	else if(head == nullptr){
		std::cout << "Can't remove from empty list!\n";
		return -1;
	}
	Node* ptr = head;
	int data{0};
	if(index == 0){
		data = ptr->data;
		head = nullptr;
		delete ptr;
		return data;
	}
	int count{0};
	while(count+1 != index){
		ptr = ptr->next;
		count++;
		if(ptr == nullptr){
			std::cout << "Index Out Of Bounds!\n";
			return -1;
		}
	}
	Node* temp = ptr->next;
	data = temp->data;
	ptr->next = temp->next;
	delete temp;
	return data;
}

void SinglyLL::display(){
	Node* ptr = head;
	while(ptr != nullptr){
		std::cout << ptr->data << "->";
		ptr = ptr->next;
	}
	std::cout << "NULL\n";
}

