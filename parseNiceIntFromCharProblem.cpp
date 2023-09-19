/*
codewars: Parse nice int from char problem

You ask a small girl,"How old are you?"She always says,
"x years old", where x is a random number between 0 and 9.

Write a program that returns the girl's age (0-9) as an integer.

Assume the test input string is always a valid string.
For example, the test input may be "1 year old" or "5 years old".
The first character in the string is always a number.
*/
#include <iostream>
#include <string>
using namespace std;

int getAge(string she_said) {
    return stoi(she_said);
}

int main() {
    
    cout<<getAge("1 year old")<<endl;//1

    return 0;
}