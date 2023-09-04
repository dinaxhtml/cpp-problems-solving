/*
codewars: Even Or Odd
Create a function that takes an integer as an argument
and returns "Even" for even numbers or "Odd" for odd numbers.
*/

#include <iostream>
#include <String>
using namespace std;

string evenOrOdd(int number) 
{
  return number%2==0? "Even": "Odd";
}

int main() {
    cout<<evenOrOdd(0)<<endl; //Even
    cout<<evenOrOdd(21)<<endl; //Odd
    return 0;
}