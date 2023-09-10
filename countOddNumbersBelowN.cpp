/*
codewars: Count Odd Numbers below n
Given a number n, return the number of positive odd numbers below n.

Examples (Input -> Output)
7  -> 3 (because odd numbers below 7 are [1, 3, 5])
15 -> 7 
Expect large Inputs!
*/
#include <iostream>
using namespace std;

int oddCount(int n) {
/*
  int counter=0;
  for (int x=0; x<n; x++) {
    if (x%2!=0) {
      counter++;
    }
  }
  return counter; this solution is time consuming */

  return n/2; //better solution
}

int main() {

    cout<<oddCount(7)<<endl;//3
    cout<<oddCount(15)<<endl;//7

    return 0;
}