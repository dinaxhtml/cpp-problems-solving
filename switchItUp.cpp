/*
codewars: Switch it Up!

When provided with a number between 0-9, return it in words.

Input :: 1
Output :: "One".
*/
#include <iostream>
#include <string>
using namespace std;

string switchItUp(int number) {
  switch(number) {
      case 0: return "Zero";
      case 1: return "One";
      case 2: return "Two";
      case 3: return "Three";
      case 4: return "Four";
      case 5: return "Five";
      case 6: return "Six";
      case 7: return "Seven";
      case 8: return "Eight";
      case 9: return "Nine";
      default: return "The number must be between 0 and 9";
  }
}

int main() {

    cout<<switchItUp(5)<<endl;//"Five"

    return 0;
}