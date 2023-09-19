/*
Assiut University Training - Newcomers
T. Sort Numbers
time limit per test 0.25 seconds
memory limit per test 256 megabytes

Given three numbers A, B, C. Print these numbers in ascending order
followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A,B,C(-10^6 ≤ A,B,C ≤ 10^6)
Output
Print the values in ascending order followed by a blank line
and then the values in the sequence as they were read.

Examples
input
3 -2 1
output
-2
1
3

3
-2
1
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    
    int arr[3]={num1,num2,num3};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+3 );

	for (int i = 0; i < n; ++i)
        cout << arr[i] << "\n";
	cout<<endl;
    cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;

}