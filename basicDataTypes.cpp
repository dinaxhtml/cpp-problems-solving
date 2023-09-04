/*
B. Basic Data Types
time limit per test 1 second
memory limit per test 256 megabytes

The following lines show some C++ data types, their format specifiers and their most common bit widths:
int : 32 Bit integer.
long long : 64 bit integer
Char : 8 bit Characters & symbols
Float : 32 bit real value
Double : 64 bit real value

Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

Output
Print each element on a new line in the same order it was received as input.

Example
input
3 12345678912345 a 334.23 14049.30493
output
3
12345678912345
a
334.23
14049.3
*/

#include <iostream>
using namespace std;

int main() {
    int i;
    long long l;
    char ch;
    float f;
    double d;
    cin>>i>>l>>ch>>f>>d;

    cout<<i<<"\n"<<l<<"\n"<<ch<<"\n"<<f<<"\n"<<d;

    return 0;
}