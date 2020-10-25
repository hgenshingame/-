#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	
	int a;
	unsigned b;
	cin>>a;
	if (a>0){
	if(a%10==0) {
		a/=10;
		cout<<"-";
	}
	while(a>0) {
		cout<<a%10;
		a=a/10;
	}
	}
	if(a<0){
		a=(unsigned)a;
	    while(a>0) {
		cout<<a%10;
		a=a/10;
	}
	}
	if(a==0) cout<<"0";
	return 0;
}

