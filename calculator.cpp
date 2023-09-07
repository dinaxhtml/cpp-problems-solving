/*
O. Calculator
time limit per test 1 second
memory limit per test 256 megabytes

Given a mathematical expression. The expression will be one of the following expressions:
A+B, A−B, A∗B and A/B.
Print the result of the mathematical expression.

Input
Only one line contains A,S and B(1≤A,B≤10^4), S is either (+,−,∗,/).
Output
Print the result of the mathematical expression.

Examples
input       output
7+54        61

input       output
17*10       170

Note:For the dividing operation you should print the division without any fractions.
*/
#include <iostream>
using namespace std; 

int main() {
	long long num1,num2;
	char opreator;
	cin>>num1>>opreator>>num2;
	if(opreator== '+' ){
		cout<<num1+num2<<endl;
	}
	else if(opreator== '-' ){
		cout<<num1-num2<<endl;
	}
	else if(opreator== '*' ){
		cout<<num1*num2<<endl;
	}
	else if(opreator== '/' ){
		cout<<num1/num2<<endl;
	}
    return 0;
}
