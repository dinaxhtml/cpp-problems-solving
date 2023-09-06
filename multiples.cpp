/*
J. Multiples
time limit per test 1 second
memory limit per test 256 megabytes

Given two numbers A and B.
Print "Multiples" if A is multiple of B or vice versa.
Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  10^6)
Output
Print the "Multiples" or "No Multiples".

Examples:
input
9 3
output
Multiples
input
6 24
output
Multiples
input
12 5
output
No Multiples

Note: A is said to be Multiple of B if B is divisible by A.

First Example :
9 is divisible by 3 , So the answer is: Multiples.

Second Example :
#6 is not divisible by 24 but
#24 is divisible by 6 , So the answer is: Multiples.

Third Example :
12 is not divisible by 5 and 5 is not divisible by 12.
So the answer is: No Multiples.
*/
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if( a%b==0 || b%a==0)
    cout<<"Multiples"<<endl;
    else
    cout<<"No Multiples"<<endl;
    
    return 0;
}