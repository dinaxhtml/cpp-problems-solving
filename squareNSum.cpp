/*
codewars: Square(n) Sum

Complete the square sum function so that it squares each number passed into it and then sums the results together.

For example, for [1, 2, 2] it should return 9 because 
1^2 + 2^2 + 2^2= 9.
*/
#include <iostream>
#include <vector>
using namespace std;

int squareSum(vector<int> numbers)
{
    int answer=0;
    for(int i=0; i<numbers.size();i++) {
        answer=answer+(numbers[i] * numbers[i]);
    }
    return answer;
}

int main() {
    vector<int> v1={1,2,2};
    cout<<squareSum(v1)<<endl;//9

    return 0;
}