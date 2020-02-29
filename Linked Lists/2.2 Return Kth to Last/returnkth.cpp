/*
Implement an algorithm to find the kth to last 
element of a singly linked list. 
*/
#include <iostream>
#include "../Linked Lists/linkedlist.h"

using std::cout;
using std::endl;

int main()
{
    LinkedList a;

    // Fill Linked List
    for(int i = 1; i <= 10; i++)
    {
        a.append(i);
    }

    a.printList(); 

    return 0;
}