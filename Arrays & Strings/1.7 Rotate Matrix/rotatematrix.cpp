/*
Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. Can you do this in place? 
*/
#include <iostream>
#include "rotatematrix.h"

using std::cout;
using std::endl;

int main(){

    char photo[4][4] = {{'A','B','C','D'}, {'E','F','G','H'}, {'I','J','K','L'}, {'M','N','O','P'}};
    printMatrix(photo);
    cout << "\n\nRotating...\n";
    rotateRight(photo);
    printMatrix(photo);

}