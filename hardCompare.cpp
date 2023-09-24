/*
Assiut University Training - Newcomers
Z. Hard Compare
time limit per test 1s
memory limit per test 256 megabytes

Given 4 numbers A,B,C and D. If A^B > C^D print "YES"
otherwise, print "NO".

Input
Only one line containing 4 numbers A,B,C and D(1≤A,C≤107),(1≤B,D≤1012)
Output
Print "YES" or "NO" according to the problem above.

Examples
input
3 2 5 4
output
NO

input
5 2 4 2
output
YES

input
5 2 5 2
output
NO

Note:
First Example :
3^2= 9 and 5^4= 625 then 9 < 625 so the answer is NO.

Second Example :
5^2=25 and 4^2= 16 then 25 > 16 so the answer is YES.

Third Example :
5^2= 25 and 5^2= 25 then 25 = 25 so the answer is NO.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    // a^b == b*Log(a) smaller size
    double answer1=b*log(a);
    double answer2=d*log(c);
    if(answer1>answer2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}