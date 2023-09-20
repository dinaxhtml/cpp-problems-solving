/*
codewars: Sort and Star

You will be given a list of strings. You must sort it alphabetically (case-sensitive,
and based on the ASCII values of the chars) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array.

Example:
{"take","bitcoin","over","the","maybe","who"} ==> "b***i***t***c***o***i***n"
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string twoSort(vector<string> s)
{
    sort(s.begin(),s.end());
    string temp=s.at(0);
    string answer="";
  for(int i=0;i<temp.length();i++) {
    answer+=temp[i];
    if(i!=temp.length()-1)
    answer+="***";
  }
  return answer;
}

int main() {

    vector<string> s={"take","bitcoin","over","the","maybe","who"};
    cout<<twoSort(s)<<endl;//b***i***t***c***o***i***n

    return 0;
}