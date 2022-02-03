#ifndef ARRAY_H
#define ARRAY_H

// implemented Array class only for handling integer arrays.
class Array{
	private:
		int size{0};
		int* arr;
	public:
		Array(int size);
		int getElement(int index);
		void insertElement(int index, int element);
		void removeElement(int index);
		void display();
};

#endif
