/*
Assume you have a method isSubstring() which checks if one word is a substring
of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one
call to isSubstring() (e.g., "waterbottle" is a rotation of"erbottlewat"). 
*/
#include <iostream>
#include "stringrotation.h"

using std::string;

/**
 * PROVIDED FUNCTION (I didn't create this)
 * https://www.geeksforgeeks.org/check-string-substring-another/
*/
// Returns true if s1 is substring of s2 
int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
  
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
} 


int main(){

}
