/*
codewars: Lario and Muigi Pipe Problem

Looks like some hoodlum plumber and his brother has been running around and damaging your stages again.

The pipes connecting your level's stages together need to be fixed before you receive any more complaints.

The pipes are correct when each pipe after the first is 1 more than the previous one.

Task
Given a list of unique numbers sorted in ascending order, return a new list so that the values increment by 1
for each index from the minimum value up to the maximum value (both included).

Example:
Input:  1,3,5,6,7,8
Output: 1,2,3,4,5,6,7,8
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pipeFix(vector<int> nums) {
  sort(nums.begin(),nums.end());
  vector<int> answer;
  for(int i=nums.front();i<=nums.back();i++)
    answer.push_back(i);
  return answer;
}

int main() {
    vector<int> v=pipeFix({1,3,5,6,7,8});
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    //1,2,3,4,5,6,7,8
    
    return 0;
}