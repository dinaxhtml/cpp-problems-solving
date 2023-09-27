/*
codewars: Is it a palindrome?

Write a function that checks if a given string (case insensitive) is a palindrome.

A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards,
such as "madam" or "racecar".
*/
#include <iostream>
#include <string>
using namespace std;

bool isPalindrom (const string& str) {
  for(int i=0;i<str.length();i++) {
    if(tolower(str[i])!=tolower(str[str.length()-1-i]))
      return false;
  }
  return true;
}

int main() {
    
    cout<<isPalindrom("Abba")<<endl;//1 true
    cout<<isPalindrom("a")<<endl;//1 true
    cout<<isPalindrom("abda")<<endl;//0 false

    return 0;
}