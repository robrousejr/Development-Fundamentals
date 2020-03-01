#pragma once
#include <stack>
#include <iostream>

using std::stack;
using std::cout;

/**
 * Pop out all elements on stack and print them out
*/
void printPopStack(stack<int> &a)
{
    while(!a.empty())
    {
        cout << a.top() << " "; 
        a.pop();
    }
}