/*
codewars: Find the smallest integer in the array

Given an array of integers your solution should find the smallest integer.

For examples:
Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345
You can assume, for the purpose of this kata, the array will not be empty.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector<int> list) {
    sort(list.begin(),list.end());
    return list.at(0);
}

int main() {

    cout<<findSmallest({34,-345,-1,100})<<endl;//-345

    return 0;
}