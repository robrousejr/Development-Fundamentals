#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "../2.5 Sum Lists/sumlists.h"

using std::cout;
using std::cerr;
using std::vector;

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

/**
 * @param k = kth to last (ex: 0 == last, 1 == 1 before last)
 * Find kth to last element of a singly linked list
*/
int kthToLast(int k)
{
    int size = this->getSize(); // # of elements in list
    Node* node = this->head; // Traversal node

    // Error checking
    if(k > (size - 1))
    {
        cerr << "ERROR: Element doesn't exist at " << k << " spaces before end of list";
        return -1;
    }
    else
    {
        int diff = size - k; // # of element to find

        // Traverse through list
        for(int i = 1; i < diff; i++)
        {
            node = node->next; // Iterate
        }
    }

    return node->data;
}

/**
 * Delete middle node (anything but first and last)
 * If no middle node, delete a node close to the middle
*/
void deleteMiddleNode()
{
    int size = this->getSize();

    // Error checking
    if(size <= 2)
    {
        cerr << "ERROR: Can't delete middle node since no middle node exists...\n";
        return;
    }
    else
    {
        int middle;

        // if even
        if(size % 2 == 0)
        {
            middle = size / 2;    
        }
        else
        {
            middle = (size / 2) + 1;
        }

        this->deleteNode(middle);
    }
}

/**
 * @param b Second linked list
You have two numbers represented by a linked list, where each 
node contains a single digit. The digits are stored in reverse order, 
such that the 1 's digit is at the head of the list. Write a function 
that adds the two numbers and returns the sum as a linked list. 
*/
LinkedList sumLists(LinkedList* b)
{
    std::string aString, bString;

    Node* aHead = this->head;
    Node* bHead = b->head;

    while(aHead != NULL)
    {
        aString.insert(0, std::to_string(aHead->data)); // Insert digit at offset 0 (prepend)
        aHead = aHead->next; // Iterate
    }

    while(bHead != NULL)
    {
        bString.insert(0, std::to_string(bHead->data)); // Insert digit at offset 0 (prepend)
        bHead = bHead->next; // Iterate
    }

    // Convert numbers to int
    int aNum = std::stoi(aString);
    int bNum = std::stoi(bString);

    // Create new LinkedList of sum
    LinkedList sum;
    int total = aNum + bNum;
    int numDigs = numDigits(total);

    // Insert digits into linked list
    for(int i = 0; i < numDigs; i++)
    {
        int lastDigit = total % 10; // get last digit
        total /= 10; // Remove last digit
        sum.append(lastDigit); // Insert digit
    }

    return sum;

}

/**
 * Return true if linked list is a palindrome
*/
bool isPalindrome()
{
    int size = this->getSize(); // # of elements

    // if even, not possible
    if(size % 2 == 0)
    {
        return false;
    }
    else
    {
        vector<int> firstHalf;
        vector<int> secondHalf;

        int i; // traversal 
        Node* node = this->head; // Start at head

        // Iterate through first half
        for(i = 0; i < ((size - 1) / 2); i++)
        {   
            firstHalf.push_back(node->data);
            node = node->next; // Move to next
        }

        node = node->next; // Skip middle node

        // Iterate through second half
        for(int i = 0; i < ((size - 1) / 2); i++)
        {
            // Insert numbers at beginning
            vector<int>::iterator it = secondHalf.begin();
            secondHalf.insert(it, node->data);
            node = node->next;
        }

        if(firstHalf == secondHalf)
            return true;
        else
            return false;        
        
    }
    
}

};