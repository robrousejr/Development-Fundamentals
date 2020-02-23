#include <iostream>
#include "linkedlist.h"

using std::cout;

int main()
{
    LinkedList a;
    a.append(10);
    a.append(20);
    a.append(15);
    a.printList();
    cout << "\nValue of head element: ";
    cout << a.getHead();

    return 0;
}