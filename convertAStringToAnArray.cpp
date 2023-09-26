/*
codewars: Convert a string to an array

Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]
"I love arrays they are my favorite" ==>
["I", "love", "arrays", "they","are", "my", "favorite"]
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> stringToArray(const string& s) {
    vector<string> vec;
    string temp="";
    for(int i=0;i<s.length();i++) {
        if(s[i]!=' ')
        temp+=s[i];
        else {
        vec.push_back(temp);
        temp.clear();
        }
    }
    vec.push_back(temp);
    return vec;
}

int main() {
    vector<string> v1=stringToArray("Robin Singh");
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i);
        if(i!=v1.size()-1)
        cout<<", ";
    }
    cout<<endl;
    //"Robin", "Singh"

    return 0;
}