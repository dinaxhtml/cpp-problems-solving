/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
F. Multiplication table
time limit per test 1s
memory limit per test 256 megabytes

Given a number N. Print the maltiplication table of the number from 1 to 12

For example: if N = 1

Input
Only one line containing a number N (1 ≤ N ≤ 50).

Output
Print 12 lines according to the required above.

Example:
input
2
output
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
2 * 11 = 22
2 * 12 = 24
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=12;i++)
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;

    return 0;
}