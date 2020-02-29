#pragma once
#include <iostream>

using std::cout;
using std::cerr;

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
 * TODO: Add getSize() error checking
*/
void insertAfter(int afterNum, int d)
{
    // Don't allow insert before 1st element. Use push() for that
    if(afterNum < 1)
    {
        cerr << "ERROR: You can only insert after the first element\n";
        return;
    }

    int size = this->getSize();
    
    // Can't insert after total size
    if(afterNum > size)
    {
        cerr << "ERROR: There are only " << size << " elements. You can't insert after that point.\n";
        return;
    }

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
 * @param element = # of element to delete
 * Deletes element at certain position (starting at 1)
*/
void deleteNode(int element)
{
    // Error checking 
    if(element < 1 || element > this->getSize())
    {
        cerr << "ERROR: Can't delete element at " << element << " position because it doesn't exist\n";
        return;
    }

    // Delete head node
    if(element == 1)
    {
        Node* node = this->head; // Head node
        this->head = node->next; // Create new head node
        free(node); // Free memory of deleted node
    }
    else
    {
        Node* node = this->head->next; // Start at 2nd node
        Node* prevNode = this->head; // Node before 

        // Find element to delete
        for(int i = 2; i < element; i++)
        {
            node = node->next;
            prevNode = prevNode->next;
        }

        prevNode->next = node->next; // Make new order
        free(node); // Free memory of deleted node
    }

}

/**
 * Get size of linked list (# of elements)
*/
int getSize()
{
    // Start at head
    Node* node = this->head;
    int ct = 0;

    while(node != NULL)
    {
        ct++;
        node = node->next;
    }

    return ct;
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

/*
 * Remove duplicates in a list
*/
void removeDuplicates()
{
    Node* node = this->head; // Start at head
    int numNode = 1; // Offset of "node"

    // Traverse through list
    while(node != NULL)
    {
        int numNodeCompare = numNode + 1; // Offset of "traverseNode"
        int val = node->data; // Holds int val of node

        Node* traverseNode = node->next; // Searches rest of list for duplicates

        // Traverse through rest of list
        while(traverseNode != NULL)
        {
            if(traverseNode->data == val)
            {
                deleteNode(numNodeCompare); // Delete duplicate
            }

            // Iterate node
            traverseNode = traverseNode->next; 
            numNodeCompare++;
        }

        // Iterate node
        node = node->next;
        numNode++;
    }
}

/**
 * @param val = Value to be deleted from LinkedList
 * Remove all nodes of certain value in a list
*/
void deleteValue(int val)
{
    Node* node = this->head; // Traversal node
    int count = 1; // # of element in linked list referencing "node"

    if(node->data == val)
    {
        node = node->next;
        deleteNode(1);
        count = 1; // Reset count
    }

    // Traverse through List
    while(node != NULL)
    {
        cout << "Count " << count << ", nodeval: " << node->data << "\n";

        // Delete node
        if(node->data == val)
        {
            node = node->next; 
            deleteNode(count);
        }
        else
        {
            node = node->next;
            count++;
        }
    }
}

};