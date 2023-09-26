/*
codewars: Twice as old

Your function takes two arguments:
-current father's age (years)
-current age of his son (years)

Сalculate how many years ago the father was twice as old as his son
(or in how many years he will be twice as old).
The answer is always greater or equal to 0,
no matter if it was in the past or it is in the future.
*/
#include <iostream>
#include <string>
using namespace std;

int twiceAsOld(int dad, int son) {
  return dad>son*2?dad-(son*2):(son*2)-dad;
}

int main() {

    cout<<twiceAsOld(36, 7)<<endl;//22
    cout<<twiceAsOld(55, 30)<<endl;//5
    cout<<twiceAsOld(42, 21)<<endl;//0
    cout<<twiceAsOld(22, 1)<<endl;//20
    cout<<twiceAsOld(29, 0)<<endl;//29

    return 0;
}