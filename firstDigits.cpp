/*
codeforces: P. First digit !
time limit per test 0.25s
memory limit per test 64 megabytes

Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".

Examples:
input
4569
output
EVEN

input
3569
output
ODD
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    
    if((num/1000)%2==0)
    cout<<"EVEN"<<endl;
    else
    cout<<"ODD"<<endl;

    return 0;
}