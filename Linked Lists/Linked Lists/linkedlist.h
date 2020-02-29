#pragma once
#include <iostream>

using std::cout;

class LinkedList {
    
    class Node {
    public: 
        int data;
        Node* next = NULL;

        Node(int d)
        {
            data = d;
        }
    };

    public:
        Node* head = NULL;

        // Gets value of head element
        int getHead()
        {
            return this->head->data;
        }

/**
 * @param d Value to be inserted in new node
 * Inserts node at end of linked list
*/
void append(int d) {
    
    Node* newNode = new Node(d); // Allocate pointer to new node

    newNode->next = NULL; // Since it'll be last node, make it's 'next' value NULL

    // If linked list is empty, make new node as head
    if(this->head == NULL)
    {
        this->head = newNode;
        return;
    }

    Node* last = this->head; // Start at head

    // Traverse until last node
    while(last->next != NULL)  
        last = last->next;

    // Add node to end
    last->next = newNode;
    return;  
}

/**
 * @param d Value to be inserted
 * Inserts node at beginning of list
*/
void push(int d)
{
    Node* newNode = new Node(d); // Allocate pointer to new node

    // Insert node before first node
    newNode->next = this->head; 
    this->head = newNode; 
}

/**
 * @param afterNum = Insert after this iteration. Ex: 3 (insert after 3rd element)
 * @param d = Value to be inserted
*/
void insertAfter(int afterNum, int d)
{
    Node* node = this->head; // Start at head

    // Traverse until insert point
    for(int i = 1; i < afterNum; i++)
    {
        node = node->next; 
    }

    Node* newNode = new Node(d); // Allocate pointer to new node

    // Insert node after
    newNode->next = node->next;
    node->next = newNode;
}

/**
 * Prints out contents of list
*/
void printList()
{
    // Start at head
    Node* node = this->head;

    while(node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

};