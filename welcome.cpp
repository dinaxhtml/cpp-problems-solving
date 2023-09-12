/*
ACM-JU Summer training 2023 - Level 0 on
codeforces: A. Welcome!
time limit per test 0.5 s
memory limit per test 256 megabytes

Monther is obsessed with keyboards so he has so many keyboards, he just noticed that if he wants to keep buying keyboards
he has to get rid of some to save space for newer ones.

Monther has K keyboards, each keyboard cost is X ,he wants to keep one keyboard for himself
and sell all other keyboards, how much money would monther make by selling them?

Input
You will be given two integers K and X, 1≤K,X≤100 where K
is the number of keyboards Monther has, and X is the cost of one keyboard.

Output
Print the amount of money Monther will make after selling all keyboards except one.

Examples
input   output
5 2     8

input   output
1 100   0
*/
#include <iostream>
using namespace std;

int main() {
    int k,x;
    cin>>k>>x;
    cout<<(k-1)*x<<endl;

    return 0;
}