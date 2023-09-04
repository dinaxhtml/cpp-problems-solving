/*
on codewars: Simple multiplication
This kata is about multiplying a given number by eight if it is an even number
and by nine otherwise.
*/

#include <iostream>
using namespace std;

int simpleMultiplication(int number) {
    if(number%2==0)
    return number*8;
    return number*9;
}

int main() {
    cout<<simpleMultiplication(2)<<endl; //16
    cout<<simpleMultiplication(1)<<endl; //9
    return 0;
}