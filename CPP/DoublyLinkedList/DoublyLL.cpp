#include <iostream>
#include "./Node.h"
#include "./DoublyLL.h"

DoublyLL::DoublyLL():
	head(nullptr){};

void DoublyLL::pushFront(int element){
	Node* node = new Node(element);
	node->next = head;
	head = node;
}

void DoublyLL::pushLast(int element){
	Node* node = new Node(element);
	if(head==nullptr){
		node->next = head;
		head = node;
	}else{
		Node* ptr = head;
		while(ptr->next != nullptr){
			ptr = ptr->next;
		}
		node->prev = ptr;
		ptr->next = node;
	}
}

void DoublyLL::pushAtIndex(int index, int element){
	if(index < 0){
		std::cout << "Negative index not allowed! \n";
		return;
	}
	else if(index == 0){
		this->pushFront(element);
		return;
	}
	else{
		int count{0};
		Node* node = new Node(element);
		Node* ptr = head;
		while(count+1 < index){
			ptr = ptr->next;
			count++;
			if(ptr == nullptr){
				std::cout << "Index Out Of Bounds !\n";
				return;
			}
		}
		node->prev = ptr;
		node->next = ptr->next;
		if(ptr->next != nullptr) ptr->next->prev = node;
		ptr->next = node;
	}
}

int DoublyLL::popFront(){
	if(head==nullptr){
		std::cout << "Can't remove from empty list!\n";
		return -1;
	}
	Node* temp = head;
	int data{temp->data};
	head = head->next;
	if(head!=nullptr) head->prev = nullptr;
	delete temp;
	return data;
}


int DoublyLL::popLast(){
	if(head==nullptr){
		std::cout << "Can't remove from empty list!\n";
		return -1;
	}
	Node* ptr = head;
	while(ptr->next!=nullptr){
		ptr = ptr->next;
	}
	Node* prev = ptr->prev;
	int data{ptr->data};
	prev->next = nullptr;
	delete ptr;
	return data;
}

int DoublyLL::popAtIndex(int index){
	if(head==nullptr){
		std::cout << "Can't remove from empty list!\n";
		return -1;
	}
	if(index==0){
		int data = head->data;
		delete head;
		head = nullptr;
		return data;
	}
	Node* ptr = head;
	int count = 0;
	while(count+1 < index){
		ptr = ptr->next;
		count++;
		if(ptr == nullptr){
			std::cout << "Index Out Of Bounds!\n";
			return -1;
		}
	}
	Node* temp = ptr->next;
	int data = temp->data;
	ptr->next = temp->next;
	if(temp->next != nullptr){
		temp->next->prev = ptr;
	}
	delete temp;
	return data;
}

void DoublyLL::display(){
	Node* ptr = head;
	if(ptr == nullptr){
		std::cout << "Empty List\n";
		return;
	}
	while(ptr!=nullptr){
		std::cout << ptr->data << "->";
		ptr = ptr->next;
	}
	std::cout << "NULL\n";
}
