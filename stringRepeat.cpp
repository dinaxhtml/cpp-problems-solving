/*
codewars: String repeat

Write a function that accepts an integer n and a string s as parameters,
and returns a string of s repeated exactly n times.
Examples (input -> output)
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"
*/
#include <iostream>
#include <string>
using namespace std;

string repeatString(int n,string s)
{
    string answer="";
    for(int i=1; i<=n; i++)
    answer+=s;
    return answer;
}

int main() {

    cout<<repeatString(3,"code")<<endl;//"codecodecode"

    return 0;
}