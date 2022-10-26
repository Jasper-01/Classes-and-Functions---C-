#include <iostream>
using namespace std;

class Matrix{
    int X;  // row
    int Y;  // column
    int** M;  // matrix

public:
    void create();
    void destroy();
    void display();
    void set();
    void transpose();
    int getMax();
    bool isSquare();
};