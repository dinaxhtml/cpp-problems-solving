/*
A. Say Hello With C++
time limit per test 1 second
memory limit per test 256 megabytes
input Given a name S. 
output Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.

Example:
programmer

Hello, programmer
*/

#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    cout<<"Hello, "<<s;

    return 0;
}