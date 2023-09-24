/*
codewars: Volume of a Cuboid

Bob needs a fast way to calculate the volume of a cuboid with three values: the length, width and height of the cuboid.
Write a function to help Bob with this calculation.
*/
#include <iostream>
using namespace std;

double getVolumeOfCuboid(double length, double width, double height) {
    return length*width*height;
}

int main() {

    cout<<getVolumeOfCuboid(1,2,2)<<endl;//4

    return 0;
}