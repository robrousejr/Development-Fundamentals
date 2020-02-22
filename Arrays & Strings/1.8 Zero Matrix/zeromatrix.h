#include <iostream>

using std::cout;

// Print array to console
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