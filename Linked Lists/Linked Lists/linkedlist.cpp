#include <iostream>
#include "linkedlist.h"

using std::cout;
using std::endl; 

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

    cout << "Inserting after 2nd element\n";
    a.insertAfter(2, 21);
    a.printList();

    cout << "\nSize of linked list: " << a.getSize() << endl;

    return 0;
}