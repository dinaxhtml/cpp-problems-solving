/*
codewars: Exclamation marks series #11: Replace all vowel to exclamation mark in the sentence

Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples:
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"
*/

#include <iostream>
#include <string>
#include <regex>
using namespace std;

string replace(const string &s) {
    regex a("[aouieAUOIE]");
    return regex_replace(s,a,"!");
}

int main() {
    cout<<replace("Hi!")<<endl;//"H!!"
    cout<<replace("Hello")<<endl;//"H!ll!"

    return 0;
}