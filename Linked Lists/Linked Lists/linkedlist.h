#pragma once
#include <iostream>

using std::cout;

class Node {

public: 
    int data;
    Node* next = NULL;

    Node(int d)
    {
        data = d;
    }

};

/**
 * @param head_ref Pointer to pointer of head of list
 * @param d Value to be inserted in new node
 * Inserts node at end of linked list
*/
void append(Node** head_ref, int d) {
    
    Node* newNode = new Node(d); // Allocate pointer to new node

    newNode->next = NULL; // Since it'll be last node, make it's 'next' value NULL

    // If linked list is empty, make new node as head
    if(*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }

    Node* last = *head_ref; // Start at head

    // Traverse until last node
    while(last->next != NULL)  
        last = last->next;

    // Add node to end
    last->next = newNode;
    return;  
}

/**
 * Prints out contents of list
*/
void printList(Node *node)
{
    while(node != NULL)
    {
        cout << node->data << " --> ";
        node = node->next;
    }
}