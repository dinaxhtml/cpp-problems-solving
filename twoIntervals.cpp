/*
Assiut University Training - Newcomers
X. Two intervals
time limit per test 1s
memory limit per test 256 megabytes

Given the boundaries of 2 intervals.
Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

Input
Only one line contains two intervals [l1,r1][l2,r2] where (1≤l1,l2,r1,r2≤10^9)(l1≤r1,l2≤r2).
It's guaranteed that l1≤r1 and l2≤r2.
Output
If there is an intersection between these 2 intervals print its boundaries,
otherwise print -1.

Examples:
input
1 15 5 27
output
5 15

input
2 5 6 12
output
-1
*/

#include <iostream>
using namespace std;

int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    if((a>=c && a<=d)&&(b>=c && b<=d))
        cout<<a<<" "<<b<<endl;
    else if((c>=a && c<=b)&&(d>=a && d<=b))
        cout<<c<<" "<<d<<endl;
    else if(a>=c && a<=d) {
        if(a>=c)
        cout<<a<<" "<<d<<endl;
        else
        cout<<c<<" "<<a<<endl;
    }
    else if(b>=c && b<=d)
        cout<<c<<" "<<b<<endl;
    else
    cout<<-1<<endl;

    return 0;
}