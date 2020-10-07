#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	double h,z,b;
	h=0;a=0;z=0;b=0;
	//for(a=2;a<=100;++a)
	while(a<=100){
	++a;
	if (a%2==1) {h=1/a;z=z+h;}
	if (a%2==0) {h=-1/a;z=z+h;}
	}
	   
	
    cout<<z;
}

