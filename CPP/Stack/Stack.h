#ifndef STACK_H_
#define STACK_H_

class Stack{
	private:
		int size;
		int top;
		int* arr;
	public:
		Stack(int size);
		void push(int element);
		int pop();
		int peek();
};

#endif
