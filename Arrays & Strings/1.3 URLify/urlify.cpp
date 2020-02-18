/*
Write a method to replace all spaces in a string with '%20'. 
You may assume that the string has sufficient space at the 
end to hold the additional characters, and that you are given 
the "true" length of the string.
*/
#include <iostream>
#include "urlify.h"

using std::cout;
using std::endl;

int main(){

    string word = "    boom  bat  ";
    cout << word << endl << URLify(word);
    return 0;
}