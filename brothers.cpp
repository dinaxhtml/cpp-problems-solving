/*
L. The Brothers
time limit per test 1 second
memory limit per test 256 megabytes

Given two person names.
Each person has {"the first name" + "the second name"}
Determine whether they are brothers or not.
Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.
Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise "NOT".

Examples:
input
bassam ramadan
ahmed ramadan
output
ARE Brothers
input
ali kamel
ali salah
output
NOT
*/
#include <iostream>
#include <string>
using namespace std;

class person {
	public:
    string firstName;
	string secondName;
};

int main() {
	person p1,p2;
	cin>>p1.firstName>>p1.secondName>>
    p2.firstName>>p2.secondName;
    if(p1.secondName == p2.secondName)
    cout<<"ARE Brothers"<<endl;
    else
    cout<<"NOT"<<endl;

	return 0;
}