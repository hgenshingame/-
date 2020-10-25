#include <iostream>
using namespace std;

int main() {
	int i,x;
	cin>>x;
	for (i=2; i<=x/2; i++)
		if (x%i==0) break;
	if ( i>x/2)  cout<<i;
}
