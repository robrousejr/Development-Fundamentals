#include <iostream>

using std::string;

// replace all spaces in a string with '%20'
string URLify(string word)
{
    string url; // URLified word

    // find where characters begin
    int i = 0;
    while(word[i] == ' ')
    {
        i++;
    }

    // find where characters end
    int e = word.size() -1;
    while(word[e] == ' ')
    {
        e--;
    }

    bool prevIs20 = false; // checks if last insert was '%20'

    // Iterate through rest of word
    for(int p = i; p <= e; p++)
    {
        // if letter is a space
        if(word[p] == ' ')
        {
            // if last insert wasn't '%20'
            if(!prevIs20)
            {
                url += "%20";
                prevIs20 = true;
            }
        }
        // Letter is a char
        else
        {
            url += word[p]; // add letter to URL
            prevIs20 = false;
        }
        
    }

    return url;
}