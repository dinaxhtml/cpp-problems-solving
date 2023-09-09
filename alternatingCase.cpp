/*
codewars: altERnaTIng cAsE <=> ALTerNAtiNG CaSe
Define a function/method such as in your selected language;
such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. 

For examples:
"hello world" === "HELLO WORLD"
"HELLO WORLD" === "hello world"
"hello WORLD" === "HELLO world"
"HeLLo WoRLD" === "hEllO wOrld"
"12345"       === "12345"        // Non-alphabetical characters are unaffected
"1a2b3c4d5e"  === "1A2B3C4D5E"
"String.prototype.toAlternatingCase" === "sTRING.PROTOTYPE.TOaLTERNATINGcASE"

As usual, your function/method should be pure, i.e. it should not mutate the original string.
*/
#include <iostream>
#include <string>
using namespace std;

string toAlternatingCase(string str) {
    string answer="";
    for(int i=0;i<str.length(); i++) {
        if(isupper(str[i]))
        answer+=tolower(str[i]);
        else if(islower(str[i]))
        answer+=toupper(str[i]);
        else
        answer+=str[i];
    }
    return answer;
}

int main() {
    cout<<toAlternatingCase("hello WORLD")<<endl; //"HELLO world"
    cout<<toAlternatingCase("12345")<<endl; //"12345"
    cout<<toAlternatingCase("1a2b3c4d5e")<<endl; //"1A2B3C4D5E"

    return 0;
}