/*
Implement a function to check if a linked list is a palindrome. 
*/

#include <iostream>
#include "../Linked Lists/linkedlist.h"

using std::cout;
using std::endl;

int main()
{   
    LinkedList a;
    for(int i = 0; i < 5; i++)
    {
        a.append(i);
    }

    a.printList();
    cout << "Is a a Palindrome? " << a.isPalindrome() << endl;

    LinkedList b;
    b.append(4);
    b.append(2);
    b.append(9);
    b.append(2);
    b.append(4);
    b.printList();
    cout << "Is b a Palindrome? " << b.isPalindrome() << endl;

    LinkedList c;
    c.append(1);
    c.append(1);
    c.printList();
    cout << "Is c a palindrome? " << c.isPalindrome() << endl;
    

    return 0;
}