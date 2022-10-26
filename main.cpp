#include "Matrix.h"
#define RUN_TIMES 3

int main() {

	for (int i = 0; i < RUN_TIMES; i++) {
		Matrix* A = new Matrix;
		cout << "====Matrix A[" << i << "]====" << endl << endl;
		A->create();
		A->set();
		A->display();
		A->transpose();
		cout << "Maximum value: " << A->getMax() << endl;
		cout << "Matrix A[" << i << "] is " << (A->isSquare() ? "" : "not ") << "a square matrix." << endl;
		A->destroy();
		delete A;
		cout << endl << "==== Bye!!! ====" << endl << endl;
	}

	return 0;
}