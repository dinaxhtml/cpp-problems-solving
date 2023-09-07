/*
M. Capital or Small or Digit
time limit per test 1 second
memory limit per test 256 megabytes

Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine
if it is Capital Case or Small Case.

Note:
Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc

Input
Only one line containing a character X which will be a capital or small letter or digit.
Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

Examples:
input       output
A           ALPHA
            IS CAPITAL

input       output
9           IS DIGIT

input       output
a           ALPHA
            IS SMALL
*/
#include <iostream>
using namespace std;

int main() {
    char c;
    cin>>c;
    if(c>=65 && c<=90)
    cout<<"ALPHA\nIS CAPITAL"<<endl;
    else if(c>=97 && c<=122)
    cout<<"ALPHA\nIS SMALL"<<endl;
    else
    cout<<"IS DIGIT"<<endl;

    return 0;
}