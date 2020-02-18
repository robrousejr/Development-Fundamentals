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

### Is Unique
* Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures? 

### Check Permutation
* Given two strings, write a method to decide if one is a permutation of the other
