/*
codewars: Sum without highest and lowest number

Sum all the numbers of a given array, except the highest and the lowest
element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge,
even if there are more than one with the same value.


Examples:
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6

Input validation
If an empty value is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int> numbers) {
    int answer=0;
    if(numbers.size()<=1)
    return 0;
    sort(numbers.begin(),numbers.end());
    for(int i=1;i<numbers.size()-1; i++)
    answer+=numbers.at(i);
    return answer;
}

int main() {

    cout<<sum({6,2,1,8,10})<<endl;//16

    return 0;
}