/*
H. Two numbers
time limit per test 1 second
memory limit per test 256 megabytes
Given 2 numbers A and B, Print floor, ceil and round of A/B
Examples
input
10 3
output
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b;
    cin>>a>>b;
    double answer=a/b;

    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(answer)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(answer)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(answer)<<endl;
    
    return 0;
}