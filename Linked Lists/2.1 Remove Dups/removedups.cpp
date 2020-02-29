/*
Write code to remove duplicates from an unsorted linked list
Function written in ../Linked Lists/linkedlist.h
*/
#include <iostream>
#include "../Linked Lists/linkedlist.h"

using std::cout;
using std::endl;

int main()
{
    LinkedList a;

    // Fill Linked List 
    a.append(3);
    a.append(4);
    a.append(3);
    a.append(4);
    a.append(10);
    a.append(1);
    a.append(2);
    a.append(10);

    a.printList();
    cout << endl;
    a.removeDuplicates();
    a.printList();

    return 0;
}