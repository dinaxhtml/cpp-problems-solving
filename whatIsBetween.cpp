/*
codewars: What is between?

Complete the function that takes two integers (a, b, where a < b)
and return an array of all integers between the input parameters, including them.

For example:
a = 1
b = 4
--> [1, 2, 3, 4]
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> between(int start, int end) {
    vector<int> list;
    for(int i=start;i<=end;i++)
        list.push_back(i);
    return list;
}

int main() {
    vector<int> s=between(1,4);
    cout<<"[";
    for(int i=0;i<s.size();i++)
    cout<<s.at(i)<<",";
    cout<<"]"<<endl;
    //[1,2,3,4]

    return 0;
}