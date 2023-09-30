/*
codewars: Sum Arrays

Write a function that takes an array of numbers and returns the sum of the numbers.
The numbers can be negative or non-integer. If the array does not contain any numbers then you should return 0.

Examples:
Input: [1, 5, 4, 0, -1]
Output: 9

Input: []
Output: 0

Input: [-2]
Output: -2
*/
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

double sum(vector<double> nums) {
  return reduce(nums.begin(),nums.end());
}

int main() {

    cout<<sum({1,5,0,-2})<<endl;//4

    return 0;
}