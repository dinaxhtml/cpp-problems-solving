/*
codewars: Grasshopper - Terminal game combat function

Create a combat function that takes the player's current health and the amount of damage recieved,
and returns the player's new health. Health can't be less than 0.
*/
#include <iostream>
using namespace std;

int combat(int health, int damage){
  return damage>health?0:health-damage;
}

int main() {

    cout<<combat(80,30)<<endl;//50
    cout<<combat(80,90)<<endl;//0

    return 0;
}