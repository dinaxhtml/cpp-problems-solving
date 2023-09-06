/*
I. Welcome for you with Conditions
time limit per test 1 second
memory limit per test 64 megabytes

Given two numbers A and B. Print "Yes" if A is greater than or equal to B.
Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).
Output
Print "Yes" or "No" according to the statement.

Examples:
input
10 9
output
Yes
input
5 7
output
No
*/
#include <iostream>
using namespace std;

int main() {
    double a,b;
    cin>>a>>b;

    if(a>=b)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    
    return 0;
}