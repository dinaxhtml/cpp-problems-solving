/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
B. Even Numbers
time limit per test 1s
memory limit per test 256 megabytes

Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output
Print the answer according to the required above. If there are no even numbers print -1.

Examples:
input
10
output
2
4
6
8
10
input
5
output
2
4
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n==1)
    cout<<-1<<endl;
    else {
    for(int i=2;i<=n;i+=2) 
		cout<<i<<endl;
    }
    return 0;
}