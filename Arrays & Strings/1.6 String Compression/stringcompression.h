#include <iostream>
#include <string>

using std::string;

// ex: aaabcccc = a3b1c4
string stringCompression(string word)
{
    int count = 1; // default count
    string compressed = ""; // compressed word

    // Iterate through string
    for(int i = 0; i < word.size(); i++)
    {
        // Current letter
        char letter = word[i];

        // if next letter is same
        if(word[i+1] == letter)
            count++; // add to count
        else
        {
            // append letter and count to compressed string and reset count
            compressed += letter; 
            compressed += std::to_string(count);
            count = 1; 
        }
    }

    return compressed;
}
