/*
codewars: Fake Binary

Given a string of digits, you should replace any digit below 5 with '0'
and any digit 5 and above with '1'. Return the resulting string.

Note: input will never be an empty string
*/

#include <iostream>
#include <String>
using namespace std;

string fakeBin(string str){
    for(int i=0;i<str.length();i++) {
        if(str[i]<'5')
        str[i]='0';
        else
        str[i]='1';
    }
    return str;
}

int main() {
    cout<<fakeBin("123456")<<endl; //"000011"
    cout<<fakeBin("837642")<<endl; //"101100"

    return 0;
}