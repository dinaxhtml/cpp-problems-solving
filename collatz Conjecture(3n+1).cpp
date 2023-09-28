/*
codewars: Collatz Conjecture (3n+1)

The Collatz conjecture (known as 3n+1 conjecture) is a conjecture that applying the following algorithm
to any number we will always eventually reach one:

[This is writen in pseudocode]
if(number is even) number = number / 2
if(number is odd) number = 3*number + 1


Your task is to make a function hotpo that takes a positive n as input and
returns the number of times you need to perform this algorithm to get n=1.

Examples:
hotpo(1) returns 0: (1 is already 1)

hotpo(5) returns 5: 5->16->8->4->2->1

hotpo(6) returns 8: 6->3->10->5->16->8->4->2->1

hotpo(23) returns 15:
23->70->35->106->53->160->80->40->20->10->5->16->8->4->2->1
*/
#include <iostream>
using namespace std;

unsigned int hotpo(unsigned int n) {
  int count=0;
  while(n!=1) {
    if(n%2==0) {
      n/=2;
      count++;
    }
    else if(n%2!=0) {
      n=n*3+1;
      count++;
    }
  }
    return count;
}

int main() {
    cout<<hotpo(1)<<endl; //0
    cout<<hotpo(5)<<endl; //5
    cout<<hotpo(6)<<endl; //8
    return 0;
}