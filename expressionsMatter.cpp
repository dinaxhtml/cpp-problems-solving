/*
codewars: Expressions Matter

Given three integers a ,b ,c, return the largest number obtained after inserting
the following operators and brackets: +, *, ()

In other words , try every combination of a,b,c with [*+()] ,
and return the Maximum Obtained 
*/
#include <iostream>
#include <algorithm>
using namespace std;

unsigned short int expressionsMatter(unsigned short int a,unsigned short int b,unsigned short int c) {
    int maxNum=max({a*(b+c),a*b*c,a+b*c,(a+b)*c,a+b+c});
    return maxNum;
}

int main() {

    cout<<expressionsMatter(2,1,2)<<endl;//6

    return 0;
}