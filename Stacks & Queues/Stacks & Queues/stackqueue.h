#pragma once
#include <stack>
#include <iostream>
#include <queue>

using std::stack;
using std::cout;
using std::queue;

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

/**
 * Pop out all elements in queue and print them out
*/
void printPopQueue(queue<int> &a)
{
    while(!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
}