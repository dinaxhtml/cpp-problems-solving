/*
D. Difference
time limit per test 1 second
memory limit per test 256 megabytes
Given four numbers A, B, C and D. Print the result of the following equation :
 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples:
input
2 3 4 5
output
Difference = -14

input
4 5 2 3
output
Difference = 14
*/
#include <iostream>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long difference= (a*b)-(c*d);
    cout<<"Difference = "<<difference;

    return 0;
}