/*
You have two numbers represented by a linked list, where each 
node contains a single digit. The digits are stored in reverse order, 
such that the 1 's digit is at the head of the list. Write a function 
that adds the two numbers and returns the sum as a linked list. 
*/

#include <iostream>
#include "../Linked Lists/linkedlist.h"

using std::cout;

int main()
{   
    // Number = 716
    LinkedList a;
    a.append(7);
    a.append(1);
    a.append(6);

    // Number = 592
    LinkedList b;
    b.append(5);
    b.append(9);
    b.append(2);

    // Containing sum
    LinkedList sum = a.sumLists(&b);
    sum.printList(); // Should be 912 (2 -> 1 -> 9)




    return 0;
}