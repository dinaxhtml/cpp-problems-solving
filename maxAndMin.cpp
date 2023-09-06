/*
K. Max and Min
time limit per test 0.25 seconds
memory limit per test 64 megabytes

Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
Input
Only one line containing 3 numbers A, B and C ( -10^5 ≤ A, B, C ≤ 10^5)
Output
Print the minimum number followed by a single space then print the maximum number.

Examples:
input
1 2 3
output
1 3
input
-1 -2 -3
output
-3 -1
input
10 20 -5
output
-5 20
*/

#include <iostream>
using namespace std;

int min(int a,int b){
    if (a<b)
    return a;
    else
    return b;
} 
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
} 
int main(){
    int a,b,c, minNum, maxNum;
    cin>>a>>b>>c;

    maxNum=max(max(a, b), c);
    minNum=min(min(a, b), c);
     
    cout<<minNum<<" "<<maxNum<<endl;
    
    return 0;
}