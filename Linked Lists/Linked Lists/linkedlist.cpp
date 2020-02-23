#include <iostream>
#include "linkedlist.h"


int main()
{
    // start with empty list
    Node *head = NULL;

    append(&head, 6);
    append(&head, 12);
    append(&head, 9);
    append(&head, 5);
    append(&head, 3);

    printList(head);

    return 0;
}