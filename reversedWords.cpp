/*
codewars: Reversed Words

Complete the solution so that it reverses all of the words within the string passed in.

Words are separated by exactly one space and there are no leading or trailing spaces.

Example(Input --> Output):
"yoda doesn't speak like this"-->"this like speak doesn't yoda"
*/
#include <iostream>
#include <string>
using namespace std;

string reverseWords(const string& str) {
  string answer="";
  string temp="";
  for(int i=0;i<str.length();i++) {
    if(str[i]==' ') {
      answer=temp+' '+answer;
      temp.clear();
    }
    else
      temp+=str[i];
  }
  answer=temp+' '+answer;
  answer.pop_back();
  return answer;
}

int main() {
    
    cout<<reverseWords("hello world!")<<endl;//"world! hello"

    return 0;
}