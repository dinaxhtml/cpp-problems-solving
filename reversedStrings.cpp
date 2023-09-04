/*
codewars: Reversed Strings
Complete the solution so that it reverses the string passed into it.
'world'  =>  'dlrow'
'word'   =>  'drow'
*/
#include <iostream>
#include <String>
using namespace std;

string reverseString(string str) 
{
  string reversed ="";
  for(int i= str.length()-1;i>=0;i--)
    reversed=reversed+str[i];
  return reversed;

  //or reverse(str.begin(), str.end());return str;
}

int main() {
    cout<<reverseString("word")<<endl; //"drow"
    cout<<reverseString("world")<<endl; //"dlrow"
    return 0;
}