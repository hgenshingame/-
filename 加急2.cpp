#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main ()
{   
	char j;
	int k,m,n;
	double q;
	cin>>k>>j;
	
	if (k<1000)
	{
		n=k-1000;
		q=ceil(n/500)*4;
		if (j=='y'){m=8+q+5;}
		else
		{ m=8+q;} 
		
	}
    else
    {
    	if (j=='y'){m=8+5 ;}
    	else{m=8 ;}
	}
	
	
	
	
	cout<<m;
	return 0;
}
