/*
codewars: Convert number to reversed array of digits

Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0]
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> digitize(unsigned long n) {        
  vector<int> answer;
  string s=to_string(n);
  reverse(s.begin(),s.end());
  for(int i=0;i<s.length();i++)
    answer.push_back(s[i]-'0');
  return answer;
}

int main() {
    vector<int> v=digitize({35231});
    for(int i=0;i<v.size();i++)
    cout<<v.at(i)<<" ";
    cout<<endl;
    //1 3 2 5 3

    return 0;
}