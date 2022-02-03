#include <iostream>
#include "2DArr.h"

static bool validIndexes(int arrRow, int arrCol, int row, int col);
static int* getAddress(int arrRow, int arrCol, int row, int col, int* arr, bool isColumnMajor);
// 'static' ensures internal linkage.

//constructor
TDArr::TDArr(int rows, int cols, bool columnMajor):
	rows(rows), cols(cols), isColumnMajor(columnMajor)
{
	arr = new int[rows*cols]; 
	// allocate array of size rows*cols
}

// access element
int TDArr::getElement(int row, int col){
	bool isValidIndex = validIndexes(rows, cols, row, col);
	if(isValidIndex){
		int* addr = getAddress(rows, cols, row, col, arr, isColumnMajor);
		return *addr;
	}
	else return -1;
}

// update element
void TDArr::updateElement(int row, int col, int element){
	bool isValidIndex = validIndexes(rows, cols, row, col);
	if(isValidIndex){
		int *addr = getAddress(rows, cols, row,  col, arr, isColumnMajor);
		*addr = element;
	}
}

// delete element
void  TDArr::deleteElement(int row, int col){
	bool isValidIndex = validIndexes(rows, cols, row, col);
	if(isValidIndex){
		int *addr = getAddress(rows, cols, row,  col, arr,  isColumnMajor);
		*addr = 0;
	}
}

// printing matrix
void TDArr::display(){
	int* ptr = 0;
	int i = 0; 
	int j = 0;
	if(!isColumnMajor){
		// row Major traversal
		for(i = 0; i < rows*cols; i+=cols){
			for(j = 0; j < cols; j++){
				std::cout << arr[i+j] << " ";
			}
			std::cout << "\n";
		}
	}else{
		// column Major traversal
		for(j = 0; j < rows; j++){
			for(i = 0; i < rows*cols; i+=rows){
				std::cout << arr[i+j] << " ";
			}
			std::cout << "\n";
		}
	}
}

// checking if indexes are valid or not.
static bool validIndexes(int arrRow, int arrCol, int row, int col){
	if(row >= arrRow || col >= arrCol){
		std::cout << "Index Out of Bounds" << std::endl;
		return false;
	}
	else if(row < 0 || col < 0){
		std::cout << "Negative index not allowed" << std::endl;
		return false;
	}
	else return true;
}

// getting element addr using pointer arithmetic
static int* getAddress(int arrRow, int arrCol, int row, int col,int* arr, bool isColumnMajor){
	int* addr;
	if(!isColumnMajor) addr = arr + (row*arrCol + col);
	else addr = arr + (col*arrRow + row);
	return addr;
}
