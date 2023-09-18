/*
codewars: Sum of differences in array

Your task is to sum the differences between consecutive pairs in
the array in descending order.

Example
[2, 1, 10]  -->  9
In descending order: [10, 2, 1]
Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

If the array is empty or the array has only one element
the result should be 0
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sumOfDifferences(vector<int> arr){
    int sum=0;
    sort(arr.rbegin(),arr.rend());
    if(arr.size()<=1)
    return 0;
  
    for(int i=0; i<arr.size()-1 ;i++)
    sum+= arr[i]-arr[i+1];

    return sum;
}

int main() {

    cout<<sumOfDifferences({2,1,10})<<endl;//9
    cout<<sumOfDifferences({})<<endl;//0

    return 0;
}