/*
Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
column are set to 0. 
*/
#include <iostream>
#include "zeromatrix.h"

using std::cout;

int main(){
    int photo[5][4] = {{9,2,4,5}, {5,0,7,8}, {1,4,5,6}, {2,4,3,3}, {1,7,8,5}};
    printArray(photo);
    zeroMatrix(photo);

    cout << "\nAfter zeroMatrix()\n";
    printArray(photo);
}
