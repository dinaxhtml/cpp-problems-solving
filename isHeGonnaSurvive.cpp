/*
codewars: Is he gonna survive?

A hero is on his way to the castle to complete his mission.However,
he's been told that the castle is surrounded with a couple of powerful dragons!
each dragon takes 2 bullets to be defeated,
our hero has no idea how many bullets he should carry..
Assuming he's gonna grab a specific given number of bullets and move forward to
fight another specific given number of dragons,will he survive?

Return true if yes, false otherwise :)

Examples:
hero(10, 5)     true
hero(7, 4)      false
hero(4, 5)      false
hero(100, 40)   true
hero(1500, 751) false
hero(0, 1)      false
*/
#include <iostream>
using namespace std;

bool hero(int bullets, int dragons) {
  return bullets/2 >=dragons;
}

int main() {
    
    cout<<hero(10, 5)<<endl;//true == 1
    cout<<hero(7, 4)<<endl;//false == 0
    cout<<hero(100, 40)<<endl;//true == 1
    cout<<hero(1500, 751)<<endl;//false == 0
    cout<<hero(0,1)<<endl;//false == 0

    return 0;
}