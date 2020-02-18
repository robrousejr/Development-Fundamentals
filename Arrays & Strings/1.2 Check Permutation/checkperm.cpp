/*
Given two strings, write a method to decide if one is a permutation of the other
*/
#include <iostream>
#include "checkperm.h"

using std::cout;

int main(){

    string p = "plane";
    string q = "lanpe";

    cout << p << " and " << " q are ";

    if(checkPermutation(p, q))
        cout << "Permutations!";
    else
        cout << "Not permutations!";

    return 0;
}