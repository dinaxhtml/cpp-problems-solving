/*
codewars: Powers of 2

Complete the function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive ).

Examples
n = 0  ==> [1]        #[2^0]
n = 1  ==> [1, 2]     #[2^0, 2^1]
n = 2  ==> [1, 2, 4]  #[2^0, 2^1, 2^2]
*/
#include <iostream>
#include <cstdint>
#include <vector>
#include <cmath>
using namespace std;

vector<uint64_t> powersOfTwo(int n) {
  vector<uint64_t> answer;
  for(int i=0;i<=n;i++)
    answer.push_back(pow(2,i));
  return answer;
}

int main() {
    vector<uint64_t> v=powersOfTwo(3);
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";
    cout<<endl;
    //1 2 4 8
    
    return 0;
}