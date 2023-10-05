/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
D. Fixed Password
time limit per test 1s
memory limit per test 256 megabytes

Given multiple lines each line contains a number X which is a password.
Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

Input
The input contains several passwords.
Each line contains a number X (10^3≤X≤10^4-1).
Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

Example:
input
2200
1020
1999
1000
9999
output
Wrong
Wrong
Correct
*/
#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    while(x!=1999) {
        cout<<"Wrong"<<endl;
        cin>>x;
    }
    cout<<"Correct"<<endl;
    
    return 0;
}