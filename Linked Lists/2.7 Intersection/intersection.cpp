/*
Given two (singly) linked lists, determine if the two lists intersect. Return the
intersecting node. Note that the intersection is defined based on reference, not value. 
That is, if the kth node of the first linked list is the exact same node (by reference) 
as the jth node of the second linked list, then they are intersecting. 
*/

#include <iostream>
#include "../Linked Lists/linkedlist.h"

using std::cout;
using std::endl;

int main()
{   
    LinkedList a;
    for(int i = 0; i < 5; i++)
    {
        a.append(i);
    }

    a.printList();

    return 0;
}