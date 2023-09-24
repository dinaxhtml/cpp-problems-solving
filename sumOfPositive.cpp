/*
codewars: Sum of positive

You get an array of numbers, return the sum of all of the positives ones.

Example [1,-4,7,12] => 1 + 7 + 12 = 20

Note: if there is nothing to sum, the sum is default to 0.
*/
#include <iostream>
#include <vector>
using namespace std;

int positiveSum(vector<int> arr) {
    int answer=0;
    for(int i=0;i<arr.size();i++) {
        if(arr.at(i)>0)
        answer+=arr.at(i);
    }
    return answer;
}

int main() {

    cout<<positiveSum({34,-345,-1,100})<<endl;//134

    return 0;
}