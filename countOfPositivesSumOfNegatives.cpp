/*
codewars: Count of positives / sum of negatives

Given an array of integers.

Return an array, where the first element is the count of positives numbers and
the second element is sum of negative numbers. 0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.

Example:
For input [1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15],
you should return [10,-65].
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> countPositivesSumNegatives(vector<int> input) {
    if(input.size()==0) 
      return {};
    int count=0, sum=0;
    for(int i=0;i<input.size();i++) {
      if(input[i]>0)
        count++;
      else
        sum+=input[i];
    }
    return {count,sum};
}

int main() {

    vector<int> v1=countPositivesSumNegatives({1,2,3,-10,-3});

    for(int i=0;i<v1.size();i++)
    cout<<v1.at(i)<<" ";
    //3 -13

    return 0;
}