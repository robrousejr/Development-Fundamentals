#include <iostream>
#include "linkedlist.h"

using std::cout;
using std::endl; 

int main()
{
    LinkedList a;
    a.append(7);
    a.append(10);
    a.append(7);
    a.append(20);
    a.append(15);
    a.append(7);
    a.printList();

    cout << "\nDeleting all 7's\n";
    a.deleteValue(7);
    a.printList();

    return 0;
}