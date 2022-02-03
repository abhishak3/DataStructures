#ifndef TDARR_H_
#define TDARR_H_

class TDArr{
	private:
		int rows;
		int cols;
		int* arr;
		bool isColumnMajor;
	public:
		//constructor
		TDArr(int rows, int cols, bool columnMajor = false);
		int getElement(int row, int col);

		//no concept of shifting of elements in a matrix;
		void updateElement(int row, int col, int element);
		void deleteElement(int row, int col);

		// printing matrix
		void display();
};

#endif
