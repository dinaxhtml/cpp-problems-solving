/*
codewars: Jenny's secret message

Jenny has written a function that returns a greeting for a user.
However, she's in love with Johnny, and would like to greet him slightly different.

Examples:
greet("James") ==>  "Hello, James!"
greet("Jane")  ==>  "Hello, Jane!"
greet("Johnny")==>  "Hello, my love!"
*/
#include <iostream>
#include <string>
using namespace std;

string greet(string name) {
 if(name == "Johnny")
    return "Hello, my love!";
  else
  return "Hello, " + name + "!";
}

int main() {
    cout<<greet("James")<<endl; //"Hello, James!"
    cout<<greet("Jane")<<endl; //"Hello, Jane!"
    cout<<greet("Johnny")<<endl; //"Hello, my love!"
    return 0;
}