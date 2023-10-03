/*
ACM-JU Summer training 2023 - Level 0 on
Contest #1
I. Lucky Numbers
time limit per test 1s
memory limit per test 256 megabytes

A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N(10≤N≤99).
Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples:
input
39
output
YES

input
64
output
NO
*/
#include <iostream>
using namespace std;

int main() {
    int n;
	cin>>n;

	int firstD=n%10;
	int lastD=n/10;
	
	if(firstD%lastD==0 || lastD%firstD==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

    return 0;
}