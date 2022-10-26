#include "Matrix.h"
#define MAX_VAL 5

// get user input (n, m) to create and allocate n by m matrix
void Matrix::create() {
  cout << "Input 1st number:";
  cin >> X;
  cout << "Input 2nd number:";
  cin >> Y;

  M = new int *[X];
  for (int i = 0; i < X; i++) {
    M[i] = new int[Y];
  }
};


// deallocates memory
void Matrix::destroy() {
  for (int i = 0; i < X; i++) {
    delete[] M[i];
  }
  delete[] M;
};


// displays matrix in n by m format
void Matrix::display() {
  cout << "Matrix display" << endl;
  for (int i = 0; i < X; i++) {
    for (int j = 0; j < Y; j++) {
      cout << M[i][j] << ", ";
    }
    cout << endl;
  }
};

// set values of matrix 
void Matrix::set() {
  for (int i = 0; i < X; i++) {
    for (int j = 0; j < Y; j++) {
      M[i][j] = rand() % MAX_VAL + 1; // +1 so value != 0
    }
  }
};

// transpose matrix (n by m becomes m by n)
void Matrix::transpose() {
  cout << "Transpose of Matrix:" << endl;
  for (int i = 0; i < Y; i++) {
    for (int j = 0; j < X; j++) {
      cout << M[j][i] << ", ";
    }
    cout << endl;
  }
};

// retrieve and print maximum value
int Matrix::getMax() {
  int max = 0;
  for (int i = 0; i < X; i++) {
    for (int j = 0; j < Y; j++) {
      if (max == 5) {
        return max;
      } else if (M[i][j] > max) {
        max = M[i][j];
      }
    }
  }
  return max;
};

// check if matrix is a square
bool Matrix::isSquare() {
  if (X == Y)
    return true;
  else
    return false;
};