#pragma once

#include <iostream>
#include <list>
using std::list;
using std::cout; 
using std::endl;

class Hash {
  int bucketNum; // number of buckets
  list<int> *table; // pointer to array containing buckets
  
  public:
    Hash(int num); // constructor
    void insertItem(int x); // inserts key into hash table
    void deleteItem(int x); // deletes key from hash table

    // maps values to keys
    int hashFunction(int x){
      return (x % bucketNum); // mod assures value is smaller than bucketNum
    }

    void displayHash(); // displays hash
};

// Hash constructor
Hash::Hash(int num)
{
  this->bucketNum = num; // assign bucketNum
  table = new list<int>[bucketNum]; // Create table with 'bucketNum' buckets 
}

// Inserts key
void Hash::insertItem(int key)
{
  int index = hashFunction(key); // Get index to insert key from hash func
  table[index].push_back(key); // Insert key into table at index
}

// Deletes key
void Hash::deleteItem(int key)
{
  int index = hashFunction(key); // get index of key
  
  list<int>::iterator i; // iterates through hash table

  // Iterate through sub-list where key is (in case multiple elements are mapped there)
  for(i = table[index].begin(); i != table[index].end(); i++)
  {
    // key was found
    if(*i == key)
    {
      break;
    }
  }

  // If key exists, erase
  if(i != table[index].end())
  {
    table[index].erase(i); // erase key
  }
}

// print hash table
void Hash::displayHash()
{
  // Iterate through hash table
  for(int i = 0; i < bucketNum; i++)
  {
    cout << i;

    // Iterate through sub-tables at each Bucket
    for(auto x : table[i])
    {
      cout << " --> " << x; 
    }

    cout << endl;
  }
}