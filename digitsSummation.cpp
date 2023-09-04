/*
F. Digits Summation
time limit per test 0.25 seconds
memory limit per test 64 megabytes
Given two numbers N and M. Print the summation of their last digits.
Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 10^18).
Output
Print the answer of the problem.
Example:
input
13 12
output
5
Note:
last digit in the first number is 3 and last digit in the second number is 2.
So the answer is: (3 + 2 = 5)
*/
#include <iostream>
using namespace std;

int main() {
    long long num1,num2;
    cin>>num1>>num2;
    cout<<(num1%10)+(num2%10)<<endl;

    return 0;
}