// Implementing a hash table
#include "hashtable.h"
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

// Fills an array with random numbers
void fillArrayWithRandomNumbers(int *arr, int size)
{
  for(int i = 0; i < size; i++)
  {
    arr[i] = rand() % 100 + 1; // random number 1-100
  }
}

int main()
{

  srand(time(NULL)); // initialize random seed

  // array that contains keys to be mapped 
  int arr[6] = {};
  int arrSize = sizeof(arr)/sizeof(arr[0]); // num of elements in array
  fillArrayWithRandomNumbers(arr, arrSize);
  
  Hash hashTable(9); // 9 is count of buckets in hash table
  
  // insert the keys into the hash table 
  for (int i = 0; i < arrSize; i++)  
    hashTable.insertItem(arr[i]);

  // display the Hash table 
  hashTable.displayHash(); 
  
  return 0; 
}