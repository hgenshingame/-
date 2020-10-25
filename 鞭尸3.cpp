#include<iostream>
using namespace std;

int main() {
	double a,b;
	for(int i=1; i<=100; i++) {
		if (i%2==0) {
			a=a-1.0/i;
		} 
		else {
			a=a+1.0/i;
		}
	}
	cout<<a;
	return 0;
}
