/*
codewars: Remove First and Last Character

Your goal is to create a function that removes the first and last characters of a string.
You're given one parameter, the original string.
You don't have to worry with strings with less than two characters.
*/
#include <iostream>
#include <string>
using namespace std;

string sliceString (string str )
{
    string answer="";
    for(int i=1; i<str.length()-1; i++)
    answer+=str[i];
    return answer;
}

int main() {

    cout<<sliceString("code")<<endl;//od

    return 0;
}