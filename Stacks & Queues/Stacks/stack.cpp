#include <iostream>
#include "stack.h"
#include <stack>

using std::cout;
using std::endl; 
using std::stack;

int main()
{
    stack<int> a;
    a.push(3);
    a.push(5);
    a.push(2);

    printPopStack(a);


    return 0;
}