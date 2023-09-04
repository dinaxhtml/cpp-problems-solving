/*
codewars: Century From Year
The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

*/
#include <iostream>
#include <cmath>
using namespace std;

double centuryFromYear(double year) {
    return ceil(year/100);
}

int main() {
    cout<<centuryFromYear(1705)<<endl; //18
    cout<<centuryFromYear(1900)<<endl; //19
    return 0;
}