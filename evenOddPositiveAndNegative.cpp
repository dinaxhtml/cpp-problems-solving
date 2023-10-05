/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
C. Even, Odd, Positive and Negative
time limit per test 1s
memory limit per test 256 megabytes

Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 10^3) number of values.
Second line contains N numbers (-10^5 ≤ Xi ≤ 10^5).

Output
Print four lines with the following format:
First Line: "Even: X", where X is the number of even numbers in the given input.
Second Line: "Odd: X", where X is the number of odd numbers in the given input.
Third Line: "Positive: X", where X is the number of positive numbers in the given input.
Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example:
input
5
-5 0 -3 -4 12
output
Even: 3
Odd: 2
Positive: 1
Negative: 3
*/
#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n;
    int pCount=0,nCount=0,eCount=0,oCount=0;
    for(int i=0;i<n;i++) {
		cin>>x;
        if(x%2==0) eCount++;
        else oCount++;
        if(x>0) pCount++;
        else if(x<0) nCount++;
    }

    cout<<"Even: "<<eCount<<"\nOdd: "<<oCount<<"\nPositive: "
    <<pCount<<"\nNegative: "<<nCount<<endl;
    
    return 0;
}