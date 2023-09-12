/*
ACM-JU Summer training 2023 - Level 0 on
codeforces: B. Even and Odd
time limit per test 5 s
memory limit per test 256 megabytes

In this problem, Yazan gives you a range from 1 to X (inclusive),
and he asks about the number of even and the number of odd values within that range.

As X could be very large, you decided to use your coding skills to solve it.

Input
X: The last value to be checked. 1≤X≤10^9

Output
Two spaces separated integers: the number of even values and the number of odd values within the range.

Examples
input   output
10      5 5

input   output
5       2 3
*/
#include <iostream>
using namespace std;

int main() {
    long long x;
    cin>>x;
    long long evenCount=x/2;
    cout<<evenCount<<" "<<(x-evenCount)<<endl;

    return 0;
}