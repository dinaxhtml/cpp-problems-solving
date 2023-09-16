/*
codewars: Get Nth Even Number

Return the Nth Even Number

Example(Input --> Output)
1 --> 0 (the first even number is 0)
3 --> 4 (the 3rd even number is 4 (0, 2, 4))
100 --> 198
1298734 --> 2597466

The input will not be 0.
*/
#include <iostream>
using namespace std;

int nthEven(int n) {
    return (n*2)-2;
}

int main() {
    
    cout<<nthEven(1)<<endl;//0
    cout<<nthEven(2)<<endl;//2
    cout<<nthEven(3)<<endl;//4

    return 0;
}