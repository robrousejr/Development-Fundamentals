#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::cerr;

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

// Changes row and column to all 0's where 0 is present
template<typename T, size_t row, size_t col>
T zeroMatrix(T(&array)[row][col])
{
    // Holds rows/cols where 0's are found
    vector<int> zeroRows = {};
    vector<int> zeroCols = {};

    // Go through matrix and find 0's
    for(int x = 0; x < row; x++)
    {  
        for(int y = 0; y < col; y++)
        {
            // if zero, save row and column
            if(array[x][y] == 0)
            {
                zeroRows.push_back(x); // Save row
                zeroCols.push_back(y); // Save col
            }
        }
    }

    if(zeroRows.size() != zeroCols.size())
    {
        cerr << "ERROR: rows and columns saved aren't the same...";
        return -1;
    }

    // Make row and column full of 0's
    for(int i = 0; i < zeroCols.size(); i++)
    {
        int thisRow = zeroRows[i];
        int thisCol = zeroCols[i];

        for(int currRow = 0; currRow < row; currRow++)
        {
            array[currRow][thisCol] = 0;
        }

        for(int currCol = 0; currCol < col; currCol++)
        {
            array[thisRow][currCol] = 0;
        }
    }
}