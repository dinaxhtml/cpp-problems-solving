/*
codewars: Grasshopper - Messi goals function

Messi is a soccer player with goals in three leagues:
LaLiga
Copa del Rey
Champions

Complete the function to return his total number of goals in all three leagues.

Note: the input will always be valid.

For example:
5, 10, 2  -->  17
*/
#include <iostream>
using namespace std;

int goals(int laLigaGoals,int copaDelReyGoals,int championsLeagueGoals) {
  return laLigaGoals+copaDelReyGoals+championsLeagueGoals;
}

int main() {

    cout<<goals(5,10,2)<<endl;//17

    return 0;
}