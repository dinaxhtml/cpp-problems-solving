/*
codewars: MakeUpperCase

Write a function which converts the input string to uppercase.
*/
#include <iostream>
#include <string>
using namespace std;

string makeUpperCase(string input_str) {
    string answer="";

    for(int i=0;i<input_str.length();i++)
    answer+=toupper(input_str[i]);

    return answer;
}

int main() {
    
    cout<<makeUpperCase("hello")<<endl;//HELLO

    return 0;
}