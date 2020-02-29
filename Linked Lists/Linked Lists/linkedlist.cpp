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

    cout << "Inserting node at start...\n";

    a.push(7); // Insert 7 at start
    a.printList();

    cout << "Inserting after 1st element\n";
    a.insertAfter(1, 21);
    a.printList();

    return 0;
}