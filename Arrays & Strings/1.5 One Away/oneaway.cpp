/*
There are three types of edits that can be performed on strings: insert a character, 
remove a character, or replace a character. Given two strings, write a function to 
check if they are one edit (or zero edits) away.
*/
#include <iostream>
#include "oneaway.h"

using std::cout;
using std::endl;

int main(){
    string a = "ple";
    string b = "pale";

    cout << oneAway(a, b); 

}