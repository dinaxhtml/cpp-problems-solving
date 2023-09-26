/*
Assiut University Training - Newcomers
contest #1
C. Next Alphabet
time limit per test 1 second
memory limit per test 256 megabytes

Given a lowercase alphabet character.
You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C.
Output
Print the next letter to C in the alphabet.

Example:
input
a
output
b
Note: The next letter to z is a.
*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin>>ch;
    if(ch=='z')
    cout<<'a'<<endl;
    else {
    int intCh=ch;
    intCh++;
    ch=intCh;
    cout<<ch<<endl;
    }
    
    return 0;
}