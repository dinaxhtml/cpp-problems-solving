/*
codewars: Find numbers which are divisible by given number

Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor.
First argument is an array of numbers and the second is the divisor.

Example(Input1, Input2 --> Output)
[1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> divisibleBy(vector<int> numbers, int divisor) {
  vector<int> answer;
  for(int i=0;i<numbers.size();i++) {
    if(numbers[i]%divisor==0)
      answer.push_back(numbers[i]);
    }
  return answer;
}

int main() {
    vector<int> v=divisibleBy({1, 2, 3, 4, 5, 6},2);
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";
    cout<<endl;
    //2 4 6
    
    return 0;
}