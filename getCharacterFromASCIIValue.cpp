/*
codewars: get character from ASCII Value

Write a function which takes a number and returns the corresponding ASCII char for that value.

Example:
65 --> 'A'
97 --> 'a'
48 --> '0
*/
#include <iostream>
using namespace std;

char getChar(int i) {
    return char(i);
}

int main() {
    
    cout<<getChar(65)<<endl;//A
    cout<<getChar(97)<<endl;//a
    cout<<getChar(48)<<endl;//0

    return 0;
}