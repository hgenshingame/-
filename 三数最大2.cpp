#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c); 
	
	if (a>b&&a>c)
	  cout<<a;
	if (b>a&&b>c)
	  cout<<b;
	if (c>a&&c>b)
	  cout<<c;
	return 0;
}
