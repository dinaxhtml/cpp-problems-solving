/*
codewars: Sum The Strings

Create a function that takes 2 integers in form of a string as
an input, and outputs the sum (also as a string):

Example:(Input1,Input2-->Output)
"4",  "5" --> "9"
"34", "5" --> "39"
"", "" --> "0"
"2", "" --> "2"
"-5", "3" --> "-2"

If either input is an empty string, consider it as zero.
*/
#include <iostream>
#include <string>
using namespace std;

string sumStr(string a,string b) {
    return to_string(stoi(a==""?"0":a) + stoi(b==""?"0":b));
}

int main() {
    
    cout<<sumStr("21","")<<endl;//21

    return 0;
}