/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
G. Factorial
time limit per test 1s
memory limit per test 256 megabytes

Given a number N. Print the factorial of number N.

Input
First line contains a number T (1 ≤ T ≤ 15) number of test cases.
Next T lines will contain a number N (0 ≤ N ≤ 20)
Output
For each test case print a single line contains the factorial of N.

Example:
input
2
5
3
output
120
6

Notes:
Factorial, in mathematics, the product of all positive integers less than or equal
to a given positive integer and denoted by that integer and an exclamation point.

Thus, factorial seven is written 7!, meaning 1*2*3*4*5*6*7 = 5040.

Factorial zero is defined as equal to 1.
*/
#include <iostream>
using namespace std;

long long fac(long long n) {
    if(n==0 || n==1)
    return 1;
    return n*fac(n-1);
}
int main() {
    long long t,x;
    cin>>t;

    while(t--) {
        cin>>x;
        cout<<fac(x)<<endl;
    }

    return 0;
}