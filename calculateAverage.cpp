/*
codewars: Calculate average

Write a function which calculates the average of the numbers in a given list.

Note: Empty arrays should return 0.
*/
#include <iostream>
#include <vector>
using namespace std;

double calcAverage(vector<int> values) {
  double answer=0;
  for(int i=0;i<values.size();i++) {
    answer+=values[i];
  }
  return answer/values.size();
}

int main() {
    vector<int> v={2,5};
    cout<<calcAverage(v)<<endl;//3.5

    return 0;
}