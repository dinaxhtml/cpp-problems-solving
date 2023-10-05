/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
E. Max
time limit per test 1s
memory limit per test 256 megabytes

Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 10^3).
Second line contains N numbers Xi (0 ≤ Xi ≤ 10^9).

Output
Print the maximum number.

Example:
input
5
1 8 5 7 5
output
8
*/
#include <iostream>
using namespace std;

int main() {
    int n,x,max=0;
    cin>>n;
    for(int i=0;i<n;i++) {
		cin>>x;
        if(x>max)
        max=x;
    }
    cout<<max<<endl;
    return 0;
}