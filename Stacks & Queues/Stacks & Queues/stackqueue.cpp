#include <iostream>
#include "stackqueue.h"
#include <stack>
#include <queue>

using std::cout;
using std::endl; 
using std::stack;
using std::queue;

int main()
{
    // Implement stack
    stack<int> a;
    a.push(3);
    a.push(5);
    a.push(2);
    printPopStack(a);
    cout << endl;

    // Implement queue
    queue<int> b;
    b.push(3);
    b.push(5);
    b.push(2);
    printPopQueue(b);

    return 0;
}