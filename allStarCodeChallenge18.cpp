/*
codewars: All Star Code Challenge #18
Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

If no occurrences can be found, a count of 0 should be returned.

("Hello", 'o')  ==>  1
("Hello", 'l')  ==>  2
("", 'z')       ==>  0

Notes:
The first argument can be an empty string
In languages with no distinct character data type, the second argument will be a string of length 1
*/
#include <iostream>
#include <string>
using namespace std;

int strCount(string word, char letter){
  int count=0;
  for(int i=0; i<word.length(); i++) {
    if(word[i]==letter)
    count++;
  }
  return count;
}

int main() {
    cout<<strCount("Hello",'o')<<endl; //1
    cout<<strCount("Hello",'l')<<endl; //2
    cout<<strCount("", 'z')<<endl; //0

    return 0;
}