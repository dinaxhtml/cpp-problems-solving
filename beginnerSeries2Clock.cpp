/*
codewars: Beginner Series #2 Clock
Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight in milliseconds.
Example:
h = 0
m = 1
s = 1

result = 61000
Input constraints:
0 <= h <= 23
0 <= m <= 59
0 <= s <= 59
*/
#include <iostream>
using namespace std;

int milliseconds(int h, int m, int s) {
  int oneSecond= 1000;          //1s=1000ms
  int oneMinute= 60 * oneSecond;//1m=60s*1000ms
  int oneHour= 60 * oneMinute;  //60m*60s*1000mss

    return (oneHour*h)+(oneMinute*m)+(oneSecond*s);
}

int main() {
    cout<<milliseconds(0, 1, 1)<<endl; //61000
    cout<<milliseconds(1, 1, 1)<<endl; //3661000
    cout<<milliseconds(0, 0, 0)<<endl; //0

    return 0;
}