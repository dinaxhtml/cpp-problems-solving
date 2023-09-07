/*
codewars: Convert a String to a Number!

We need a function that can transform a string into a number.
What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

Examples
"1234" --> 1234
"605"  --> 605
"1405" --> 1405
"-7" --> -7
*/
#include <iostream>
#include <string>
using namespace std;

int stringToNumber(const std::string& s) {
  return stoi(s);
}

int main() {

    cout<<stringToNumber("123")<<endl;//123
    cout<<stringToNumber("-7")<<endl;//-7
    cout<<stringToNumber("0")<<endl;//0
    cout<<stringToNumber("-0")<<endl;//0

    return 0;
}