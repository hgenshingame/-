#include<iostream>
using namespace std;

int main()
{
	int a,b,h;
	h=0;a=1;b=0;
	for(a=1;a<=20;++a){
		h=a/b;
		a=a+b;b=a+b;
	}
	
    cout<<h;
}
