/*
Assiut University Training - Newcomers
Y. The last 2 digits
time limit per test 1s
memory limit per test 256 megabytes

Given 4 numbers A,B,C and D.
Print the last 2 digits from their Multiplication.

Input
Only one line containing four numbers A,B,C and D(2≤A,B,C,D≤10^9).

Output
Print the last 2 digits from their Multiplication.

Examples:
input
5 7 2 4
output
80

input
3 9 9 9
output
87
Notes:
First Example :
the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280
so the answer will be the last 2 digits which are 80.

Second Example :
the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187
so the answer will be the last 2 digits which are 87.
*/

#include <iostream>
using namespace std;

int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;b%=100;c%=100;d%=100;
    long long answer=a*b*c*d;
    if(answer%100<=9)
    cout<<"0"<<answer%100<<endl;
    else
    cout<<answer%100<<endl;

    return 0;
}