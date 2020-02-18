#include <iostream>
#include <stdlib.h>

using std::string;
using std::cout;
using std::endl;

// check if strings are one edit away
bool oneAway(string a, string b){

    cout << "Comparing " << a << " and " << b << endl;

    // zero edits away
    if(a == b){
        cout << "Same strings! Equal!\n";
        return true;
    }

    // if size is 2+ edits away
    if(abs((long)a.size() - (long)b.size()) > 1)
    {
        cout << "Size too different! Not equal!\n";
        return false;
    }

    // Insert 1 to a
    if(a.size() < b.size())
    {
        string::iterator aIt = a.begin();
        string::iterator bIt = b.begin();

        // Iterate through larger string
        for(bIt; bIt != b.end(); bIt++)
        {
            if(*aIt != *bIt)
            {
                cout << *aIt << " != " << *bIt << endl;

                a.insert(aIt, *bIt);

                cout << "Now a is " << a << endl;
                return a == b ? true : false;
            } 

            aIt++;
        }
    }
    // insert 1 to b
    else if(a.size() > b.size())
    {
        
    }
    // edit one character
    else
    {
        
    }
    
}