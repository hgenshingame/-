#include<iostream>
using namespace std;

int main()
{
	long long n,m,r;
	cin>>m>>n;
	r=m%n;
	while (r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	cout<<n;
	return 0;
}
