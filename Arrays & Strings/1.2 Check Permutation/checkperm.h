#include <iostream>
#include <algorithm>

using std::string;

// decides if one string is a permutation of the other
bool checkPermutation(string word1, string word2)
{

    // Sort words into alphabetical order
    string sorted1 = word1;
    string sorted2 = word2;
    std::sort(sorted1.begin(), sorted1.end()); // sort word1 into sorted
    std::sort(sorted2.begin(), sorted2.end()); // sort word1 into sorted

    // if equal, they're permutations
    if(sorted1 == sorted2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}