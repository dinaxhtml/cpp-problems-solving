/*
codewars: Abbreviate a Two Word Name

Write a function to convert a name into initials.
This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:
Sam Harris => S.H
patrick feeney => P.F
*/
#include <iostream>
#include <string>
using namespace std;

string abbrevName(string name) {
  string answer="";
  answer+= toupper(name[0]);
  answer+= ".";
  answer+= toupper(name[name.find(" ")+1]);

  return answer;
}

int main() {
    
    cout<<abbrevName("Sam Harris")<<endl;//S.H

    return 0;
}