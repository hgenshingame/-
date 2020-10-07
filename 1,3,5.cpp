#include<iostream>
using namespace std;

int main()
{
	int a,h;
	h=0;
	a=0;
	for(a=1;a<=100;a+=2)
	   h=a+h;
	
    cout<<h;
}
