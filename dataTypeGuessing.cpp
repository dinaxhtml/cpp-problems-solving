/*
ACM-JU Summer training 2023 - Level 0 on
Contest #1
H. Data Type Guessing
time limit per test 1s
memory limit per test 256 megabytes

Given three numbers n, k and a. Identify whether the data type of (n×k)/a is int, long long or double.

Input
Only one line containing three numbers n,k and a(1≤a,k,n≤2147483647).
Output
Print "int", "long long" or "double" (without quotes) as described in the statement.

Examples:
input
3 6 9
output
int

input
100000 200000 4
output
long long

Notes:
double is when a number has a floating-point.
int Range: [−2147483648,2147483647].
long long can hold values of a bigger range than that of int.
*/
#include <iostream>
using namespace std;

int main() {
    double n,k,a;
	cin>>n>>k>>a;
    
	double answerD=(n*k)/a;
	long long answerL=answerD;
	double sub=answerD-answerL;

	if(answerD-answerL>0)
		cout<<"double"<<endl;
	else if(answerL<=2147483647)
		cout<<"int"<<endl;
	else
		cout<<"long long"<<endl;

    return 0;
}