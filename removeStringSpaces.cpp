/*
codewars: Remove String Spaces

Write a function that removes the spaces from the string, then return the resultant string.

Examples:
"8 j 8   mBliB8g  imjB8B8  jl  B" -> "8j8mBliB8gimjB8B8jlB"
"8aaaaa dddd r     " -> "8aaaaaddddr"
*/
#include <iostream>
#include <string>
using namespace std;

string noSpace(string x)
{
    string answer="";
    for(int i=0; i<=x.length(); i++) {
        if(x[i] != ' ')
        answer+=x[i];
    }
    return answer;
}

int main() {

    cout<<noSpace("8  aa aaa dddd r     ")<<endl;//"8aaaaaddddr"

    return 0;
}