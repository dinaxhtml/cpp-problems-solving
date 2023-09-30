/*
codewars: Total amount of points

Our football team has finished the championship.

Our team's match results are recorded in a collection of strings. Each match is represented by a string
in the format "x:y", where x is our team's score and y is our opponents score.

For example: ["3:1", "2:2", "0:1", ...]

Points are awarded for each match as follows:

if x > y: 3 points (win)
if x < y: 0 points (loss)
if x = y: 1 point (tie)

We need to write a function that takes this collection and returns the number of points our team (x) got
in the championship by the rules given above.
*/
#include <iostream>
#include <string>
#include <array>
using namespace std;

int points(const array<string,10>& games) {
  int score=0;
  for(auto result :games) {
    if(result[0]>result[2])
      score+=3;
    else if(result[0]==result[2])
      score+=1;
  }
  return score;
}

int main() {

    cout<<points({"3:1","2:2","0:1"})<<endl;//4

    return 0;
}