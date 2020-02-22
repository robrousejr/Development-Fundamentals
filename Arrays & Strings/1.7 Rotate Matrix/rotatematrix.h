#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// Prototypes
void printMatrix(char[4][4]);

// Rotate a matrix to the left
void rotateLeft(char matrix[4][4])
{
    char arr[16] = {};
    char tmpCt = 0;

    // Fill temporary array with correct order of values
    for(int row = 0; row <= 3; row++)
    {
        for(int col = 3; col >= 0; col--)
        {
            arr[tmpCt] = matrix[row][col];
            tmpCt++;
        }
    }
    
    tmpCt = 0; // reset temporary counter 

    // Store new order of values in matrix
    for(int col = 0; col <= 3; col++)
    {
        for(int row = 0; row <= 3; row++)
        {
            matrix[row][col] = arr[tmpCt];
            tmpCt++;
        }
    }
}

// Rotates a matrix to the right
void rotateRight(char matrix[4][4])
{

    char arr[16] = {};
    char tmpCt = 0;

    // Fill temporary array with correct order of values
    for(int row = 3; row >= 0; row--)
    {
        for(int col = 0; col <= 3; col++)
        {
            arr[tmpCt] = matrix[row][col];
            tmpCt++;
        }
    }
    
    tmpCt = 0; // reset temporary counter 

    // Store new order of values in matrix
    for(int col = 0; col <= 3; col++)
    {
        for(int row = 0; row <= 3; row++)
        {
            matrix[row][col] = arr[tmpCt];
            tmpCt++;
        }
    }

}

// Output matrix to console
void printMatrix(char photo[4][4]) {
    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cout << photo[row][col] << " ";
        }

        cout << endl;
    }
}