#include <iostream>

using std::string;

// Prototypes 
bool isRotation(string, string);
int isSubstring(string, string);

bool isRotation(string s1, string s2)
{
    if(s1.size() == s2.size() && s1.size() > 0)
    {
        string s1s1 = s1 + s1;
        return isSubstring(s1,s2);
    }
    else
    {
        return false;
    }
    
}

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