/*
codewars: Grasshopper - Summation

Write a program that finds the summation of every number from 1 to num.
The number will always be a positive integer greater than 0.

For example (Input -> Output):
2 -> 3 (1 + 2)

8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)
*/
#include <iostream>
using namespace std;

int summation(int num) {
  int sum=0;
  for(int i=1;i<=num;i++)
    sum+=i;
  return sum;
}

int main() {

    cout<<summation(2)<<endl;//3
    cout<<summation(8)<<endl;//36
    cout<<summation(4)<<endl;//10
    
    return 0;
}