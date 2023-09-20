/*
codewars: Count by X

Create a function with two arguments that will return an array
of the first n multiples of x.

Assume both numbers will be positive.

Return the results as an array or list.

Examples
countBy(1,10)  should return  {1,2,3,4,5,6,7,8,9,10}
countBy(2,5)  should return {2,4,6,8,10}
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> countBy(int x,int n) {
    vector<int> answer;
    for(int i=1;i<=n;i++)
    answer.push_back(i*x);

    return answer;
}

int main() {
    vector<int> v1=countBy(2,5);

    for(int i=0;i<v1.size();i++)
    cout<<v1.at(i)<<" ";
    //2 4 6 8 10
    return 0;
}