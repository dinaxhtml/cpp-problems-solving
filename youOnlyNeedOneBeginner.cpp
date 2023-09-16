/*
codewars: You only need one - Beginner

You will be given an array a and a value x.
All you need to do is check whether the provided array contains the value.

Array can contain numbers or strings. X can be either.

Return true if the array contains the value, false if not.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(vector<string> seq,string elem) {
    for(int  i=0;i<seq.size();i++) {
        if(seq[i]==elem)
        return true;
    }
    return false;
}

int main() {
    
    cout<<check({ "a", "b", "c"}, "b")<<endl;//1 true
    cout<<check({ "a", "b", "c" }, "e")<<endl;//0 false
    cout<<check({ }, "e")<<endl;//0 false

    return 0;
}