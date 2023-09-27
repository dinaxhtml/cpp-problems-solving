/*
Assiut University Training - Newcomers
Contest #1
D. Ali Baba and Puzzles
time limit per test 1s
memory limit per test 256 megabytes

One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4 numbers
and his task was to check whether he could get the fourth number using arithmetic operators 
(+,−,×) between the other three numbers; so that each operator is used only once.

a□b□c=d

Can you solve this tricky puzzle for him?

Input
Only one line containing four numbers a,b,c and d(−10^9≤a,b,c≤10^9),(−10^18≤d≤10^18).
Output
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

Examples:
input
3 4 5 23
output
YES

input
9 5 3 7
output
YES

input
1 2 3 1
output
NO
*/
#include <iostream>
using namespace std;
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b-c==d || a+b*c==d || a-b+c==d || a-b*c==d || a*b-c==d || a*b+c==d)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}