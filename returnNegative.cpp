/*
codewars: Return Negative

In this simple assignment you are given a number and have to make it negative.
But maybe the number is already negative?

Examples:
makeNegative(1);  // return -1
makeNegative(-5); // return -5
makeNegative(0);  // return 0

Notes:
The number can be negative already, in which case no change is required.
Zero (0) is not checked for any specific sign. Negative zeros make no mathematical sense.
*/
#include <iostream>
using namespace std;

int makeNegative(int num) {
  if(num<=0)
  return num;
  else
  return -num;
}

int main() {
    
    cout<<makeNegative(1)<<endl;//-1
    cout<<makeNegative(-5)<<endl;//-5
    cout<<makeNegative(0)<<endl;//0


    return 0;
}