/*
codewars: Gravity Flip

Bob is bored during his physics lessons so he's built himself a toy box to help pass the time.
The box is special because it has the ability to change gravity.

There are some columns of toy cubes in the box arranged in a line. The i-th column contains a_i cubes.
At first, the gravity in the box is pulling the cubes downwards. When Bob switches the gravity,
it begins to pull all the cubes to a certain side of the box, d, which can be either 'L' or 'R' (left or right).
Below is an example of what a box of cubes might look like before and after switching gravity.

+---+                                       +---+
|   |                                       |   |
+---+                                       +---+
+---++---+     +---+              +---++---++---+
|   ||   |     |   |   -->        |   ||   ||   |
+---++---+     +---+              +---++---++---+
+---++---++---++---+         +---++---++---++---+
|   ||   ||   ||   |         |   ||   ||   ||   |
+---++---++---++---+         +---++---++---++---+
Given the initial configuration of the cubes in the box, find out how many cubes are in each of the n columns after Bob switches the gravity.

Examples (input -> output):
* 'R', [3, 2, 1, 2]      ->  [1, 2, 2, 3]
* 'L', [1, 4, 5, 3, 5 ]  ->  [5, 5, 4, 3, 1]
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> flip(const char dir,const vector<int>& arr) {
    vector<int> answer=arr;
    sort(answer.begin(),answer.end());
    if(dir=='R') return answer;
    else if(dir=='L') {
      reverse(answer.begin(),answer.end());
      return answer;
    }
}

int main() {
    vector<int> v=flip('R', {3, 2, 1, 2});
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";
    cout<<endl;
    //1 2 2 3
    return 0;
}