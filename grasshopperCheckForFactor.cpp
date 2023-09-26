/*
codewars: Grasshopper - Check for factor

About factors
Factors are numbers you can multiply together to get another number.

2 and 3 are factors of 6 because: 2 * 3 = 6

You can find a factor by dividing numbers. If the remainder is 0 then the number is a factor.

For example: 2 is not a factor of 7 because: 7 % 2 = 1

Note: base is a non-negative number, factor is a positive number.
*/
#include <iostream>
using namespace std;

bool checkForFactor(int base, int factor) {
  return base%factor==0;
}

int main() {

    cout<<checkForFactor(10,2)<<endl;//1 true
    cout<<checkForFactor(63, 7)<<endl;//1 true
    cout<<checkForFactor(9, 2)<<endl;//0 false

    return 0;
}