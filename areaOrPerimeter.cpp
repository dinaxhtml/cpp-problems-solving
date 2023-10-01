/*
codewars: Area or Perimeter

You are given the length and width of a 4-sided polygon.
The polygon can either be a rectangle or a square.
If it is a square, return its area. If it is a rectangle, return its perimeter.

Example(Input1, Input2 --> Output):
6, 10 --> 32
3, 3 --> 9
Note: for the purposes of this kata you will assume that it is a square if its length and width are equal,
otherwise it is a rectangle.
*/
#include <iostream>
#include <cmath>
using namespace std;

int areaOrPerimeter(int l , int w) {
  return l==w? pow(l,2):2*(l+w);
}

int main() {
    cout<<areaOrPerimeter(4,4)<<endl;//16
    cout<<areaOrPerimeter(6,10)<<endl;//32
    
    return 0;
}