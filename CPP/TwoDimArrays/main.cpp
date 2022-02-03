#include <iostream>
#include "2DArr.h"

int main(){
	// ROW MAJOR MATRIX
	std::cout << "ROW MAJOR MATRIX\n";
	TDArr rowMajorMat(3,3);

	// initializing rowMajorMat
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			rowMajorMat.updateElement(i,j,i*j);
		}
	}
	rowMajorMat.display();

	std::cout <<"Element at rowMajorMat[2,2]: " << rowMajorMat.getElement(2,2) << std::endl;

	std::cout << "After removing element at [1,2]\n";
	rowMajorMat.deleteElement(1,2);
	rowMajorMat.display();

	std::cout << "Setting element at [1,2] to 69\n";
	rowMajorMat.updateElement(1,2,69);
	rowMajorMat.display();

	// COLUMN MAJOR MATRIX
	std::cout << "COLUMN MAJOR MATRIX\n";
	TDArr colMajorMat(3,3, true);

	// initializing colMajorMat
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			colMajorMat.updateElement(i,j,i*j);
		}
	}
	colMajorMat.display();

	std::cout <<"Element at colMajorMat[2,2]: " << colMajorMat.getElement(2,2) << std::endl;

	std::cout << "After removing element at [1,2]\n";
	colMajorMat.deleteElement(1,2);
	colMajorMat.display();

	std::cout << "Setting element at [1,2] to 69\n";
	colMajorMat.updateElement(1,2,69);
	colMajorMat.display();
}
