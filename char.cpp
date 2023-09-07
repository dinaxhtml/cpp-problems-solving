/*
N. Char
time limit per test 0.25 seconds
memory limit per test 64 megabytes

Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter
after converting it from uppercase letter to lowercase letter
Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.
Output
Print the answer to this problem.

Examples
input
a
output
A
input
A
output
a
*/
#include <iostream>
using namespace std;

int main() {
    char x;
    cin>>x;
    if(x==(char)toupper(x))
        cout<<(char)tolower(x)<<endl;
    else
        cout<<(char)toupper(x)<<endl;

    return 0;
}