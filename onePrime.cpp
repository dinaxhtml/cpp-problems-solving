/*
ACM-JU Summer training 2023 - Level 0 on
Sheet #2 (Loops)
H. One Prime
time limit per test 1s
memory limit per test 256 megabytes

Given a number X. Determine if the number is prime or not

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime.

Input
Only one line containing a number X (2 ≤ X ≤ 10^5).
Output
print "YES" if the number is prime and "NO" otherwise.

Examples:
input
7
output
YES
input
15

output
NO

Notes:
First Example :
7 is prime because it is not divisible by 2,3,4,5,6, and only divisible
by 1 and itself, so the answer is YES.

Second Example :
15 not is prime because it is divisible by 3 ,5, so the answer is NO.
*/
#include <iostream>
using namespace std;

int main() {
    int t,counter=0;
    cin>>t;

    if(t!=2 || t!=3)
        for(int i=2;i<t;i++) {
        if(t%i==0) {
        counter++;
        break;
        }
    }
    if(counter>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    
    return 0;
}