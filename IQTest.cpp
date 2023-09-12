/*
ACM-JU Summer training 2023 - Level 0 on
codeforces: C. IQ Test
time limit per test 1s
memory limit per test 256 megabytes

Yazan is going to take an IQ test containing N
tasks.

Initially, his IQ is K
and Each task has an IQ level as well, to solve a problem his IQ should be greater than or equal to the IQ of the problem.

He should solve the tasks in order and he can't come back to a problem later on, and if he solves a task his IQ will increase by the task's IQ.

Given Yazan's IQ and the tasks IQ, how many tasks he will solve?

Input
Two Integer values N and K: the number of tasks, and the initial IQ for Yazan.
1≤N≤10^5
1≤K≤100
and then N positive integers represent the IQ for each of the tasks.

it's guaranteed that Yazn's IQ will fit in an integer variable after solving all tasks.

Output
the number of tasks that Yazan could solve.

Examples
input
4 3
4 2 5 11
output
2

input
5 1
0 1 2 3 4
output
5

input
4 1
5 5 5 5
output
0

Note
In the first sample, the first task IQ will be 4 so Yazan can't solve it
the second task will be 2 so he will solve it and his IQ will become 5
the third one is 5 which is exactly his IQ level so he will solve it also and increase his IQ to 10
the fourth one is 11 so he won't solve it.
so in total, he solved 2 tasks.
*/
#include <iostream>
using namespace std;

int main() {
    int n,k,iq,solved=0;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        cin>>iq;
        if(k>=iq) {
        k+=iq;
        solved++;
        }
    }
    cout<<solved<<endl;

    return 0;
}