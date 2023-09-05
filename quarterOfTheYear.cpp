/*
codewars: Quarter Of The Year
Given a month as an integer from 1 to 12,
return to which quarter of the year it belongs as an integer number.

For examples: month 2 (February), is part of the first quarter;
month 6 (June), is part of the second quarter;
and month 11 (November), is part of the fourth quarter.
*/
#include <iostream>
using namespace std;

int quarterOf(int month){
    if(month<4)
    return 1;
    else if(month<7)
    return 2;
    else if(month<10)
    return 3;
    else
    return 4;
}

int main() {
    cout<<quarterOf(2)<<endl;//1
    cout<<quarterOf(1)<<endl;//1
    cout<<quarterOf(5)<<endl;//2
    cout<<quarterOf(9)<<endl;//3
    cout<<quarterOf(11)<<endl;//4

    return 0;
}