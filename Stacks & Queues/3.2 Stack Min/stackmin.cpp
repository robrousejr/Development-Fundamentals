/*
Find and return the minimum element in a stack
*/

#include <iostream>
#include <stack>
#include "../Stacks & Queues/stackqueue.h"

using std::cout;
using std::stack;

int main()
{
    MyStack s;
    s.push(7);
    s.push(10);
    s.push(12);
    s.push(111);
    s.push(10);
    s.push(1);
    s.getMin();
    s.pop();
    s.pop();
    s.getMin();
    s.top();

    return 0;
}