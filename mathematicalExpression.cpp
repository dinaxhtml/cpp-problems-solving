/*
Assiut University Training - Newcomers
W. Mathematical expression
time limit per test 0.25 seconds
memory limit per test 256 megabytes

Given a mathematical expression.
The expression will be one of the following expressions:
A + B = C, A - B = C and A * B = C
where A, B, C are three numbers, S is the sign between A and B,
and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0≤A,B≤100,-10^5≤C≤10^5)
and S can be ('+', '-', '*') without the quotation.
Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples:
input
5 + 10 = 15
output
Yes

input
2 * 10 = 19
output
20
*/

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    switch(s) {
        case '+':
            if(a+b==c) 
            cout<<"Yes"; 
            else 
            cout<<a+b;
            break;

        case '-':
            if(a-b==c) 
            cout<<"Yes"; 
            else 
            cout<<(a-b);
            break;

        case '*':
            if(a*b==c) 
            cout<<"Yes"; 
            else 
            cout<<a*b;
    }
            
    return 0;
}