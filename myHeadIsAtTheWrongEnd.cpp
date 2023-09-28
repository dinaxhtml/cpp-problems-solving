/*
codewars: My head is at the wrong end!

You're at the zoo... all the meerkats look weird. Something has gone terribly wrong -
someone has gone and switched their heads and tails around!

Save the animals by switching them back. You will be given an array which will have three values (tail, body, head).
It is your job to re-arrange the array so that the animal is the right way round (head, body, tail).

Same goes for all the other arrays/lists that you will get in the tests: you have to change the element positions with the same exact logics.

Example:
{"tail","body","head"} ==> {"head","body","tail"}
*/
#include <iostream>
#include <string>
#include <array>
using namespace std;

array<string,3> fixTheMeerkat(array<string,3> arr) {

  array<string,3> answer={arr[2],arr[1],arr[0]};
  return answer;
}

int main() {
    array<string,3> a=fixTheMeerkat({"tail", "body","head"});
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    //{"head","body","tail"}
    
    return 0;
}