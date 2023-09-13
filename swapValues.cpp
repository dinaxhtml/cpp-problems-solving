/*
codewars: Swap Values

I would like to be able to pass an array with two elements to my swapValues function to swap the values.
However it appears that the values aren't changing.
*/
#include <iostream>
#include <utility>
using namespace std;

pair<int, int> swapValues(pair<int, int> &values) {
    int temp=values.first;
    values.first = values.second;
    values.second = temp;

    return values;
}

int main() {
    pair<int,int> p(1,2);
    swapValues(p);
    cout<<p.first<<" "<<p.second<<endl;//2 1

    return 0;
}