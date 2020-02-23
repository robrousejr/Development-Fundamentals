/*
Assume you have a method isSubstring() which checks if one word is a substring
of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one
call to isSubstring() (e.g., "waterbottle" is a rotation of"erbottlewat"). 
*/
#include <iostream>
#include "stringrotation.h"

using std::string;
using std::cout;

int main(){
    string s1 = "waterbottle";
    string s2 = "erbottlewat";

    if(isRotation(s1, s2))
    {
        cout << "True!";
    }
    else
    {
        cout << "False!";
    }

}
