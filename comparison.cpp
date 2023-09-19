/*
Assiut University Training - Newcomers
V. Comparison
time limit per test 1 second
memory limit per test 256 megabytes

Given a comparison symbol S between two numbers A and B.
Determine whether it is Right or Wrong.

The comparison is as follows: A<B, A>B, A=B.

Where A, B are two integer numbers and S refers to the sign between them.

Input
Only one line containing A, S and B respectively (-100≤A,B≤100),
S can be ('<','>','=') without the quotes.
Output
Print "Right" if the comparison is true, "Wrong" otherwise.

Examples:
input
5 > 4
output
Right

input
9 < 1
output
Wrong

input
4 = 4
output
Right
*/
#include <iostream>
using namespace std;

int main() {

    int a,b;
    char s;
    cin>>a>>s>>b;
    switch(s) {
        case '=':
            if(a==b) 
            cout<<"Right"; 
            else 
            cout<<"Wrong";
            break;

        case '>':
            if(a>b) 
            cout<<"Right"; 
            else 
            cout<<"Wrong";
            break;

        case '<':
            if(a<b) 
            cout<<"Right"; 
            else 
            cout<<"Wrong";
    }
    return 0;
}