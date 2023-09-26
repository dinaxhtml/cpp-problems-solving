/*
Assiut University Training - Newcomers
contest #1
A. Winter Sale
time limit per test 1 second
memory limit per test 256 megabytes

The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son.
The T-shirt has a ticket that indicates a discount of X% and its price after the discount.
She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X and P(1≤X≤99,1≤P≤4×10^4)
the discount percentage, and the price of the T-shirt after the discount.
Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples:
input
20 80
output
100.00

input
15 20
output
23.53
*/
#include <iostream>
using namespace std;

int main() {
    double x,p;
    cin>>x>>p;
    double discount=(100/100)-(x/100);
    double pAfterD=p/discount;
    cout<<pAfterD<<endl;
    
    return 0;
}