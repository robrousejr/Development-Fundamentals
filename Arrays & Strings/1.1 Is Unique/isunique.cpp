/*
Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures? 
*/
#include <iostream>
#include <string>
#include "isunique.h"

using std::string;
using std::cout;
using std::endl;

int main(){
    string test = "alpsun";
    bool unique = isUnique(test);

    if(unique)
        cout << "String '" << test << "' is unique\n";
    else
        cout << "String '" << test << "' is NOT unique\n";        

    return 0;
}