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