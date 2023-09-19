/*
Assiut University Training - Newcomers
U. Float or int
time limit per test 1 second
memory limit per test 256 megabytes

Given a number N. Determine whether N is float or integer.

Note:
If N is float number then print "float" followed by the integer part
followed by decimal part separated by space.
If N is integer number then print "int" followed by the integer part
separated by space.


Input
Only one line containing a number N(1≤N≤10^3)
Output
Print the answer required above.

Examples
input
234.000
output
int 234

input
534.958
output
float 534 0.958
*/
#include <iostream>
using namespace std;

int main()
{
	double num;
	cin>>num;

	if(num-(int)num==0)
		cout<<"int "<<(int)num<<endl;
	else
		cout<<"float "<<int(num)<<" "<<num-int(num)<<endl;

	return 0;
}