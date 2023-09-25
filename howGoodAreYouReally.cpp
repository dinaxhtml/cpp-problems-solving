/*
codewars: How good are you really?

There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.

You receive an array with your peers' test scores. Now calculate the average and compare your score!

Return True if you're better, else False!

Note:
Your points are not included in the array of your class's points.
For calculating the average point you may add your point to the given array!
*/

#include <iostream>
#include <vector>
using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
  int sum=0;
  for(int i=0;i<classPoints.size();i++)
    sum+=classPoints[i];
  return yourPoints>(sum+yourPoints)/(classPoints.size()+1);
}

int main() {
    cout<<betterThanAverage({2,3}, 5)<<endl;//1 true
    cout<<betterThanAverage({100,40,34,57,29,72,57,88}, 75)<<endl;//1 true
    cout<<betterThanAverage({29,55,74,60,11,90,67,28}, 21)<<endl;// 0 false

    return 0;
}