/*
ACM-JU Summer training 2023 - Level 0 on
Contest #1
G. Katryoshka
time limit per test 1s
memory limit per test 256 megabytes

The Egyptian football team will be in Russia for the World Cup. Of course,
they all would like to buy souvenirs for their families. Luckily, they met the king of
souvenirs Matryoshka who is famous for his masterpiece Katryoshka.
He makes it using different wooden pieces: eyes, mouths and bodies.
He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.

If the king has n eyes, m mouths and k bodies, what is the largest number of Katryoshkas he can make?

Input
Only one line containing three numbers n, m and k (0≤n,m,k≤10^18) – the number of eyes, mouths and bodies respectively.
Output
Print the largest number of Katryoshkas he can make.

Examples:
input
1 2 3
output
1
input
0 11 2
output
0
input
90 24 89
output
57
*/
#include <iostream>
using namespace std;

int main() {
    long long e,m,b;
	long long count1=0,count=0;
	cin>>e>>m>>b;

	if(m!=0) {
		if(e==0 || b==0) count=0;
		else if(e<=m && e<=b) {
			b-=e;
			count1+=e;
			m-=e;
			e-=e;
		}
		else if(b<=m) {
			b-=m;
			e-=m;
			count1+=m;
			m-=m;
		} else if(e<=m) {
			count1+=e;
			e-=e;
			m-=e;
			b-=e;
		} else if(b>m) {
			b-=m;
			e-=m;
			count1+=m;
			m-=m;
		}
	}
	
	if(e==0 || b==0) count=0;
	else if((e/2)<=b) {			
		b-=(e/2);
		count=(e/2);
		e-=(e/2);
	}
	else if((e/2)>b) {
		count+=b;
		b-=b;
		e-=b*2;
	}

	cout<<count1+count<<endl;

    return 0;
}