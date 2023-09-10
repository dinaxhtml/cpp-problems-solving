/*
codewars: Is the string uppercase?

Create a method to see whether the string is ALL CAPS.

Examples (input -> output)
"c" -> False
"C" -> True
"hello I AM DONALD" -> False
"HELLO I AM DONALD" -> True
"ACSKLDFJSgSKLDFJSKLDFJ" -> False
"ACSKLDFJSGSKLDFJSKLDFJ" -> True
*/
#include <iostream>
#include <string>
using namespace std;

bool isUppercase(string s) {
  for(int i=0; i<s.length(); i++) {
    if(islower(s[i]))
    return false;
  }
  return true;
}

int main() {

    cout<<isUppercase("hello I AM DONALD")<<endl;//0==false
    cout<<isUppercase("ACSKLDFJSGSKLDFJSKLDFJ")<<endl;//1==true

    return 0;
}