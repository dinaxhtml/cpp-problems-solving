/*
codewars: L1: Set Alarm

Write a function which receives two parameters.
The first parameter, employed, is true whenever you are employed and
the second parameter, vacation is true whenever you are on vacation.

The function should return true if you are employed and not on vacation
(because these are the circumstances under which you need to set an alarm).
It should return false otherwise.

Examples:
employed | vacation 
true     | true      => false
true     | false     => true
false    | true      => false
false    | false     => false
*/
#include <iostream>
using namespace std;

bool setAlarm(bool employed,bool vacation) {
  return employed && !vacation;
}

int main() {

    cout<<setAlarm(true,false)<<endl;//1 true
    cout<<setAlarm(true,true)<<endl;//0 false

    return 0;
}