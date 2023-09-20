/*
codewars: Reversed sequence

Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseSeq(int n) {
  vector<int> rev;
  for(int i=n;i>=1;i--)
    rev.push_back(i);
  
  return rev;
}

int main() {
    vector<int> v1=reverseSeq(5);

    for(int i=0;i<v1.size();i++)
    cout<<v1.at(i)<<" ";
    //5 4 3 2 1
    return 0;
}