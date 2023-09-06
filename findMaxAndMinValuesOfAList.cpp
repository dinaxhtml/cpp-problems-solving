/*
codewars: Find Maximum and Minimum Values of a List
Your task is to make two functions max and min
that receive a list of integers as input
and return the largest and lowest number in that list, respectively.

Examples
*[4,6,2,1,9,63,-134,566]         -> max = 566, min = -134
*[-52, 56, 30, 29, -54, 0, -110] -> min = -110, max = 56
*[42, 54, 65, 87, 0]             -> min = 0, max = 87
*[5]                             -> min = 5, max = 5
Notes
You may consider that there will not be any empty arrays/vectors.
*/
#include <iostream>
#include <vector>
using namespace std;

int min(vector<int> list){
    int minNum= list[0];
    for(int i=1; i<list.size(); i++) {
        if(list[i]<minNum)
        minNum=list[i];
    }
    return minNum;
}

int max(vector<int> list){
    int maxNum=list[0];
    for(int i=1; i<list.size(); i++) {
        if(list[i]>maxNum)
        maxNum=list[i];
    }
    return maxNum;
}

int main() {
    vector<int> list1={4,6,2,1,9,63,-134,566};
    vector<int> list2={5};

    cout<<"min = "<<min(list1)<<", max = "<<max(list1)<<endl;//min = -134, max = 566
    cout<<"min = "<<min(list2)<<", max = "<<max(list2)<<endl;//min = 5, max = 5

    return 0;
}