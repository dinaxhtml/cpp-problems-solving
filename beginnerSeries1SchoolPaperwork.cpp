/*
codewars: Beginner Series #1 School Paperwork

Your classmates asked you to copy some paperwork for them. You know that there are 'n' classmates
and the paperwork has 'm' pages.

Your task is to calculate how many blank pages do you need.
If n < 0 or m < 0 return 0.

Example:
n= 5, m=5: 25
n=-5, m=5:  0
*/
#include <iostream>
using namespace std;

int paperwork(int n, int m) {
    return (n<0 || m<0)?0:n*m;
}

int main() {

    cout<<paperwork(5,5)<<endl;//25
    cout<<paperwork(-5,-5)<<endl;//0
    
    return 0;
}