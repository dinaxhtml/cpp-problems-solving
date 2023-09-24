/*
codewars: Get the mean of an array

It's the academic year's end, fateful moment of your school report. The averages must be calculated.
All the students come to you and entreat you to calculate their average for them.
Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.

The array will never be empty.
*/
#include <iostream>
#include <vector>
using namespace std;

int getAverage(vector<int> marks) {
  int sum=0;
  for(int i=0;i<marks.size();i++)
    sum+=marks.at(i);
  return sum/marks.size();
}

int main() {

    cout<<getAverage({2,5,13,20,16,16,10})<<endl;//11

    return 0;
}