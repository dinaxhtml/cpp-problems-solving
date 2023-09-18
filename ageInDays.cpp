/*
Assiut University Training - Newcomers
codeforces: R. Age in Days
time limit per test 1 second
memory limit per test 256 megabytes

Given a Number N corresponding to a person's age (in days).
Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 10^6).
Output
Print the output, like the following examples.

Examples:
input
400
output
1 years
1 months
5 days

input
800
output
2 years
2 months
10 days

input
30
output
0 years
1 months
0 days
*/
#include <iostream>
using namespace std;

int main() {
    int days;
    cin>>days;

    int years= days/365;
    days-= years*365;
    int months= days/30;
    days-= months*30;

    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days"<<endl;
    
    return 0;
}