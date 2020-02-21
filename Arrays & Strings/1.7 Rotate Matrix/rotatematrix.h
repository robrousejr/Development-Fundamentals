#include <iostream>

using std::cout;
using std::endl;

// Rotates matrix by 90 degrees
void rotateMatrix(int matrix[3][4]) {

}

void printMatrix(int photo[3][4]) {
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cout << photo[row][col] << " ";
        }

        cout << endl;
    }
}