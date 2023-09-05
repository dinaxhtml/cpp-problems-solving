/*
codewars: Invert Values
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives,
and the negatives become positives.

invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
invert([]) == []
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> invert(vector<int> &values) {
    for(int i=0;i<values.size();i++)
    values[i]*=-1;
    return values;
}

int main() {
    vector<int> s={1,-2,3,-4,5};
    invert(s);
    cout<<"[";
    for(int i=0;i<s.size();i++)
    cout<<s.at(i)<<",";
    cout<<"]"<<endl;
    //[-1,-2,-3,-4,-5]

    return 0;
}