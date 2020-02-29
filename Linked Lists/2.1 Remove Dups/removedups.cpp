#include <iostream>
#include "removedups.h"
#include "../Linked Lists/linkedlist.h"

using std::cout;

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