/*
Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures? 
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// has all unique characters?
bool isUnique(string word) {

    // Iterate through characters in word
    for(string::iterator it = word.begin(); it != word.end(); it++)
    {
        char letter = *it; // current letter

        // iterate from current letter on
        for(string::iterator subIt = it + 1; subIt != word.end(); subIt++)
        {
            cout << "Comparing " << letter << " with " << *subIt << endl;

            // if characters are equal, false
            if(*subIt == letter){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string test = "alpsun";
    bool unique = isUnique(test);

    if(unique)
        cout << "String '" << test << "' is unique\n";
    else
        cout << "String '" << test << "' is NOT unique\n";    
    

    return 0;
}