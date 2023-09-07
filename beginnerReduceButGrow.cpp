/*
codewars: Beginner - Reduce but Grow

Given a non-empty array of integers,
return the result of multiplying the values together in order. Example:

[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
*/
#include <iostream>
#include <vector>
using namespace std;

int grow(std::vector<int> nums) {
  int answer=1;
  for(int i=0; i<nums.size(); i++)
  answer*= nums[i];

  return answer;
}
int main() {
    vector<int> list={1,2,3,4};

    cout<<grow(list)<<endl;//24

    return 0;
}