/*
codewars: Do I get a bonus?

Build a function that takes in two arguments(salary, bonus).
Salary will be an integer, and bonus a boolean.

If bonus is true, the salary should be multiplied by 10.
If bonus is false, receive only his stated salary.

Return the total figure the individual will receive as a string prefixed with "$".
*/
#include <iostream>
#include <string>
using namespace std;

string bonusTime(int salary, bool bonus){
    return bonus?"$"+to_string(salary*10):"$"+to_string(salary);
}

int main() {
    
    cout<<bonusTime(500,true)<<endl;//$5000

    return 0;
}