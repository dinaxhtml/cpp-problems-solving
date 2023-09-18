/*
codewars: Array plus array

Get the sum of two arrays...

Each array includes only integer numbers.
Output is a number too.
*/
#include <iostream>
#include <vector>
using namespace std;

int arrayPlusArray(vector<int> a,vector<int> b){
    int answer=0;
    for(int i=0; i<a.size(); i++)
    answer+= a[i];

    for(int i=0; i<b.size(); i++)
    answer+= b[i];

    return answer;
}

int main() {

    cout<<arrayPlusArray({1,1},{1,2,3})<<endl;//8

    return 0;
}