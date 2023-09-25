/*
codewars: Is it even?

In this Kata we are passing a number (n) into a function.

Your code will determine if the number passed is even (or not).

The function needs to return either a true or false.

Numbers may be positive or negative, integers or floats.

Floats with decimal part non equal to zero are considered UNeven for this kata.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isEven(double n) {
    return fmod(n,2)==0;
}

int main() {
    cout<<isEven(4)<<endl;//1 true
    cout<<isEven(3)<<endl;//0 false

    return 0;
}