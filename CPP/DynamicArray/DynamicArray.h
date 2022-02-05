#ifndef D_ARR_H_ 
#define D_ARR_H_

class DynamicArray{
	private:
		int size;
		int capacity_;
		int* arr;
	public:
		DynamicArray(int size = 2);
		int getElement(int index);
		void setElement(int index, int element);
		void pushBack(int element);
		void remove(int index);
		void display();
		int getSize();
		int getCapacity();
};

#endif
