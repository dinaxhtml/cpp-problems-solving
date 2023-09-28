/*
Assiut University Training - Newcomers
Contest #1
E. Interval Sweep
time limit per test 1 seconds
memory limit per test 256 megabytes

Given two numbers a and b. You have to answer with "YES" if there is a non-empty interval consisting of
numbers from l to r (l,l+1,l+2,...,r) with a odd numbers and b even numbers, or "NO" otherwise.

Input
Only one line containing two numbers a and b(0≤a,b≤100) the number of odd numbers
and the number of even numbers in the interval respectively.
Output
Print "YES" or "NO" as described in the statement.

Examples:
input
2 3
output
YES

input
3 1
output
NO

Note Example 1 :
some valid intervales that contain 2 odd numbers and 3 even numbers can be:
l=6,r=10 contains numbers (6,7,8,9,10).
l=14,r=18 contains numbers (14,15,16,17,18).
*/
#include <iostream>
using namespace std;
 
int main() {
    
    int a,b;
    cin>>a>>b;
    if((a==0 && b==0) || (a-b>1) || (b-a>1))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    
    return 0;
}