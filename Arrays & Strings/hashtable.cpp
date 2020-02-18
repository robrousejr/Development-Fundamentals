// Implementing a hash table
#include <iostream>
#include <list>

using std::list;
using std::cout; 
using std::endl;

class Hash {
  int BUCKET; // number of buckets
  list<int> *table; // pointer to array containing buckets
  
  public:
    Hash(int num); // constructor
    void insertItem(int x); // inserts key into hash table
    void deleteItem(int x); // deletes key from hash table

    // maps values to keys
    int hashFunction(int x){
      return (x % BUCKET); 
    }

    void displayHash(); // displays hash
};

// Hash constructor
Hash::Hash(int num)
{
  this->BUCKET = num;
  table = new list<int>[BUCKET]; // Create table 
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
  list<int>::iterator i;
  
  // Iterate through sub-list where key is (in case multiple elements are mapped there)
  for(i = table[index].begin(); i != table[index].end(); i++)
  {
    if(*i == key)
    {
      break; // key was found
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
  for(int i = 0; i < BUCKET; i++)
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

int main()
{
  // array that contains keys to be mapped 
  int a[] = {15, 11, 27, 8, 12}; 
  int n = sizeof(a)/sizeof(a[0]); 
  
  // insert the keys into the hash table 
  Hash h(7);   // 7 is count of buckets in 
               // hash table 
  for (int i = 0; i < n; i++)  
    h.insertItem(a[i]);   
  
  // delete 12 from hash table 
  h.deleteItem(12); 
  
  // display the Hash table 
  h.displayHash(); 
  
  return 0; 
}