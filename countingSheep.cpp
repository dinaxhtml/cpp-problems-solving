/*
codewars: Counting sheep...

Consider an array/list of sheep where some sheep may be missing from their place.
We need a function that counts the number of sheep present in the array
(true means present).

For example
[true,  true,  true,  false,
  true,  true,  true,  true ,
  true,  false, true,  false,
  true,  false, false, true ,
  true,  true,  true,  true ,
  false, false, true,  true]
The correct answer would be 17.
*/
#include <iostream>
#include <vector>
using namespace std;

int countSheep(vector<bool> arr) {
    int counter=0;
  for(int i=0; i<arr.size();i++) {
    if(arr[i])
    counter++;
  }
    return counter;
}


int main() {
    vector<bool> v1={true,true,true,false};
    cout<<countSheep(v1)<<endl;//3

    return 0;
}