#include <iostream>

using std::cout;

// Print 2D array to console
template<typename T, size_t row, size_t col>
void printArray(T(&array)[row][col])
{
    for(int currRow = 0; currRow < row; currRow++)
    {
        for(int currCol = 0; currCol < col; currCol++)
        {
            cout << array[currRow][currCol] << " ";
        }
        cout << "\n";
    }
}


template<typename T, size_t row, size_t col>
void zeroMatrix(T(&array)[row][col])
{
    /**
     * 1. Find 0's and remember place
     * 2. Make that row and column full of 0's
     * Attempt this in-place if you can... 
    */
}