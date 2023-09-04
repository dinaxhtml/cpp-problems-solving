/*
codewars: Convert a Boolean to a String
Implement a function which convert the given boolean value into its string representation.
Note: Only valid inputs will be given.
*/
#include <iostream>
using namespace std;

string booleanToString(bool b){
    return b? "true":"false";
}

int main() {
    cout<<booleanToString(true)<<endl; //"true"
    cout<<booleanToString(false)<<endl; //"false"
    cout<<booleanToString(0)<<endl; //"false"
    return 0;
}