/*
G. Summation from 1 to N
time limit per test 0.25 seconds
memory limit per test 256 megabytes
Given a number N
. Print the summation of the numbers that is between 1 and N
(inclusive) N∑i i=1
Input
Only one line containing a number N
(1≤N≤10^9)
Output
Print the summation of the numbers that are between 1 and N
(inclusive).
Examples:
input
3
output
6
input
10
output
55
Note First Example :
the numbers between 1 and 3 are 1,2,3 So the answer is: (1 + 2 + 3 = 6)
*/
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
//for loop will cause time limit exceeded
    cout<<(n*(n+1))/2<<endl;

    return 0;
}