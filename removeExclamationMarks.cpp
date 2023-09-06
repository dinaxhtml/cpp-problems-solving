/*
codewars: Remove Exclamation Marks
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
"Hello World!" --> Hello World
"Hi!!! Hello! --> Hi Hello
*/
#include <iostream>
#include <string>
using namespace std;

string removeExclamationMarks(string str){
  string after="";
  for(int i=0; i<str.length(); i++) {
    if(str[i]=='!')
    continue;
    after+=str[i];
  }
  return after;
}

int main() {

    cout<<removeExclamationMarks("Hello World!")<<endl;//Hello World
    cout<<removeExclamationMarks("Hi!!! Hello!")<<endl;//Hi Hello

    return 0;
}