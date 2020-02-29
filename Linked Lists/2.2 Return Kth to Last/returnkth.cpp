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
    for(int i = 1; i <= 5; i++)
    {
        a.append(i);
    }

    a.printList(); 
    cout << "\nReturn 1st to last element: " << a.kthToLast(1);
    cout << "\nReturn 0th to last element: " << a.kthToLast(0);
    cout << "\nReturn 4th to last element: " << a.kthToLast(4);
    cout << "\nReturn 5th to last element: " << a.kthToLast(5);

    return 0;
}