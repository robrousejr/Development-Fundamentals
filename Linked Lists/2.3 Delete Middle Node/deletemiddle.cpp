/*
Implement an algorithm to delete a node in the middle (i.e., any node but
the first and last node, not necessarily the exact middle) of a singly linked list, given only access to
that node.
*/
#include <iostream>
#include "../Linked Lists/linkedlist.h"

using std::cout;
using std::endl;

int main()
{
    // Fill even #'d Linked List
    LinkedList a;
    for(int i = 1; i <= 8; i++)
    {
        a.append(i);
    }
    
    a.printList(); 
    cout << "Deleting middle node...\n";
    a.deleteMiddleNode();
    a.printList();
    cout << "Deleting middle node again...\n";
    a.deleteMiddleNode();
    a.printList();

    return 0;
}