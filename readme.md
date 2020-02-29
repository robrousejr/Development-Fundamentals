# Fundamentals of Software Development

## Unit Testing

* Using [Catch](https://github.com/catchorg/Catch2) for unit testing
* Followed their super easy tutorial on their Readme

## Makefile

**[Source](https://www.cs.bu.edu/teaching/cpp/writing-makefiles/)**

1. To just compile source code, use the -c flag with the compiler...
        
       % g++ -c main.cpp
       % g++ -c Point.cpp
       % g++ -c Rectangle.cpp
    
    This will generate the object files:

       main.o (for main.cpp),
       Point.o (for Point.cpp), and
       Rectangle.o (for Rectangle.cpp)

2. Then, to link the object files (.o) into an executable, we use the compiler again (although this time it will just pass the .o files on to the linking stage):

       % g++ -o main main.o Point.o Rectangle.o

3. Variables

       CXX = g++
       CXXFLAGS = -Wall -g

    In general, the form for setting a variable is:

       VARNAME = value

4. Target, Executables

       main: main.o Point.o Rectangle.o

## Arrays & Strings

### Hash Tables (Linked) 
- Data structure that maps keys to values for highly efficient lookup. 
1. Compute a key's hash code (usually int or long). *Note: 2 different keys could have same hash code*
2. Map hash code to an index in the array. 
*Ex: hash(key) % array_length.* 
*Note: 2 different hash codes to map to same index.*
3. At this index, there is a linked list of keys and values. Store the key and value in this index. We must use a linked list because of collisions: you could have two different keys with the same hash code, or two different hash codes that map to the same index. 

<img src="https://i.ytimg.com/vi/T9gct6Dx-jo/maxresdefault.jpg" width="30%">

* Here, the numbers 0-5 are **buckets**
* The people are **keys.** When key's are in the same bucket they join the linked list

### 1.1 Is Unique
Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures? 

### 1.2 Check Permutation
Given two strings, write a method to decide if one is a permutation of the other

### 1.3 URLify
Write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient space at the end to hold the additional characters, and that you are given the "true" length of the string.

### 1.5 One Away
There are three types of edits that can be performed on strings: insert a character, 
remove a character, or replace a character. Given two strings, write a function to 
check if they are one edit (or zero edits) away.

### 1.6 String Compression
Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z). 

### 1.7 Rotate Matrix
Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. Can you do this in place? 

### 1.8 Zero Matrix
Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
column are set to 0. 

### 1.9 String Rotation
Assume you have a method isSubstring() which checks if one word is a substring
of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one
call to isSubstring() (e.g., "waterbottle" is a rotation of"erbottlewat"). 

## Linked Lists
* Data structure that represents a sequence of nodes. In a singly linked list, each node points to the next node in the linked list. 
* A doubly linked list gives each node pointers to both the next node and the previous node. 

<img src="https://www.aoprogrammer.com/wp-content/uploads/2018/07/sllvsddll.png" width="40%">

* Linked list doesn't have const time to access "index" like an array. You need to iterate through to find your element

#### Benefits
* You can add/remove items from beginning of list in const time.

### My Linked List Implementation
* Singly linked list class containing a Node class
* LinkedList class has member variable `head` tracking the head node
* Node class has member variables `data` holding an int value and `next` which holds pointer to next Node

### 2.1 Remove Dups
Write code to remove duplicates from an unsorted linked list
* Function found in [../Linked Lists/linkedlist.h](/Linked%20Lists/Linked%20Lists/linkedlist.h)

### 2.2 Return Kth to Last
Implement an algorithm to find the kth to last element of a singly linked list. 