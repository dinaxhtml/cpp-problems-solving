/*
codewars: What's the real floor?

Americans are odd people: in their buildings, the first floor is actually the ground floor and there is no 13th floor (due to superstition).

Write a function that given a floor in the american system returns the floor in the european system.

With the 1st floor being replaced by the ground floor and the 13th floor being removed, the numbers move down to take their place. In case of above 13, they move down by two because there are two omitted numbers below them.

Basements (negatives) stay the same as the universal level.

Examples:
1  =>  0 
0  =>  0
5  =>  4
15  => 13
-3  => -3
*/
#include <iostream>
using namespace std;

int getRealFloor(int f) {
  if(f<=0)
  return f;
  else if(f<13)
  return f-1;
  else
  return f-2;
}

int main() {
    
    cout<<getRealFloor(1)<<endl;//0
    cout<<getRealFloor(0)<<endl;//0
    cout<<getRealFloor(15)<<endl;//13
    cout<<getRealFloor(-3)<<endl;//-3

    return 0;
}