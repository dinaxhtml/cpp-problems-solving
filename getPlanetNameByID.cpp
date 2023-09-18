/*
codewars: Get Planet Name By ID

Example (Input --> Output ):
3 --> "Earth"
*/
#include <iostream>
#include <string>
using namespace std;

string getPlanetName(int id) {
    string planets[9]={"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune","Pluto"};
    return planets[id-1];
}


int main() {

    cout<<getPlanetName(5)<<endl;//"Jupiter"

    return 0;
}