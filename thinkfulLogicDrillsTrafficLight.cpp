/*
codewars: Thinkful - Logic Drills: Traffic light

You're writing code to control your town's traffic lights. You need a function to handle each change
from green, to yellow, to red, and then to green again.

Complete the function that takes a string as an argument representing the current
state of the light and returns a string representing the state the light should change to.

For example, when the input is green, output should be yellow.
*/
#include <iostream>
#include <string>
using namespace std;

string updateLight(string current) {
    switch(current[0]) {
        case 'g': return "yellow";
        case 'y': return "red";
        case 'r': return "green";
    }
}

int main() {

    cout<<updateLight("yellow")<<endl;//"red"
    cout<<updateLight("red")<<endl;//"green"
    
    return 0;
}