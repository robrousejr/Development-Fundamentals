/*
Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. Can you do this in place? 
*/
#include <iostream>
#include "rotatematrix.h"

using std::cout;
using std::endl;

int main(){

    int photo[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,1,2}};
    printMatrix(photo);

}