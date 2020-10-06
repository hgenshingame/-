#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	
	if (a-b>0)
	{
		cout<<a<<">"<<b;
	}
	if (a-b<0)
	{
		cout<<a<<"<"<<b;
	}
	else
	{
		cout<<a<<"="<<b;
	}




}
