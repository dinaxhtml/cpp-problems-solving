/*
codewars: Grasshopper - Terminal game move function

In this game, the hero moves from left to right.
The player rolls the dice and moves the number of spaces indicated by the dice two times.

Create a function for the terminal game that takes the current
position of the hero and the roll (1-6) and return the new position.

Example:
move(3, 6) should equal 15
*/
#include <iostream>
using namespace std;

int move(int position, int roll) {
    return roll*2 + position;
}

int main() {

    cout<<move(3,6)<<endl;//15
    cout<<move(0,4)<<endl;//8

    return 0;
}