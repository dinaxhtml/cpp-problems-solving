/*
E. Area of a Circle
time limit per test 1 second
memory limit per test 256 megabytes
Area = π * R^2.
Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).
Output
Print the calculated area, with 9 digits after the decimal point
Note
* Use the data type double for this problem.
** Use setprecision(9) to print 9 digits after decimal point.
*** you can use function setprecision that are in #include<iomanip> library

Example
input
2.00
output
12.566370612
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r, pi=3.141592653;
    cin>>r;
    cout << fixed << setprecision(9); //to print 9 digits after the point
    cout<<pi*(r*r);
}