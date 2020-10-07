#include<iostream>
using namespace std;

int main()
{
	int a,h,n;
	h=0;
	a=0;
	for(a=2;a<=1002;a+=10)
	   h=a+h;
	
    cout<<h;
}
