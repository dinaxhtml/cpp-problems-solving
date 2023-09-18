/*
codewars: If you can't sleep, just count sheep!!

Given a non-negative integer, 3 for example, return a string
with a murmur: "1 sheep...2 sheep...3 sheep..." .

Input will always be valid, i.e. no negative integers.
*/
#include <iostream>
#include <string>
using namespace std;

string countSheep(int number) {
  string answer="";
  for(int i=1;i<=number;i++)
  answer+= to_string(i)+" sheep...";

  return answer;
}


int main() {

    cout<<countSheep(2)<<endl;//"1 sheep...2 sheep..."

    return 0;
}