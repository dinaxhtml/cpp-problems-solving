/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
A. 1 to N
time limit per test 1s
memory limit per test 256 megabytes

Given a number N. Print numbers from 1 to N in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 10^3).
Output
Print N lines according to the required above.

Example:
input
5
output
1
2
3
4
5
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++) 
		cout<<i<<endl;

    return 0;
}