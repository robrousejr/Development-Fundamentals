#pragma once
#include <stack>
#include <iostream>
#include <queue>

using std::stack;
using std::cout;
using std::queue;

/**
 * Pop out all elements on stack and print them out
*/
void printPopStack(stack<int> &a)
{
    while(!a.empty())
    {
        cout << a.top() << " "; 
        a.pop();
    }
}

/**
 * Pop out all elements in queue and print them out
*/
void printPopQueue(queue<int> &a)
{
    while(!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
}

/*https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/*/
// Custom Stack class
struct MyStack
{
    // Member variables
    stack<int> s;
    int minElement; // Minimum element in stack

    // Prints minimum element of MyStack 
    void getMin() 
    { 
        if (s.empty()) 
            cout << "Stack is empty\n"; 
  
        else
            cout <<"Minimum Element in the stack is: "
                 << minElement << "\n"; 
    } 
  
    // Prints top element of MyStack 
    void top() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty "; 
            return; 
        } 
  
        int t = s.top(); // Top element. 
  
        cout << "Top Most Element is: "; 
  
        // If t < minElement means minElement stores 
        // value of t. 
        (t < minElement)? cout << minElement: cout << t; 
    } 
  
    // Remove the top element from MyStack 
    void pop() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty\n"; 
            return; 
        } 
  
        cout << "Top Most Element Removed: "; 
        int t = s.top(); 
        s.pop(); 
  
        // Minimum will change as the minimum element 
        // of the stack is being removed. 
        if (t < minElement) 
        { 
            cout << minElement << "\n"; 
            minElement = 2*minElement - t; 
        } 
  
        else
            cout << t << "\n"; 
    } 
  
    // Removes top element from MyStack 
    void push(int x) 
    { 
        // Insert new number into the stack 
        if (s.empty()) 
        { 
            minElement = x; 
            s.push(x); 
            cout <<  "Number Inserted: " << x << "\n"; 
            return; 
        } 
  
        // If new number is less than minElement 
        if (x < minElement) 
        { 
            s.push(2*x - minElement); 
            minElement = x; 
        } 
  
        else
           s.push(x); 
  
        cout <<  "Number Inserted: " << x << "\n"; 
    } 
};