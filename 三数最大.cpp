#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
	int x,a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	x= a-b>0?a:b;
	x= x-c>0?x:c;
	
	cout<<x;
	
	return 0;
}
