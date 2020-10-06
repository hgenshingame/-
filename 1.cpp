#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main ()
{   
	char j;
	double k;
	cin>>k>>j;
	
	if (k>1000&&j=='y')
	{cout<<(8+ceil((k-1000)/500)*4+5);}
		
	if (k>1000&&j!='y'){ cout<<(8+ceil((k-1000)/500)*4);} 
		
	if (k<1000&&j=='y'){cout<<8+5;}
	if (k<1000&&j!='y'){cout<<8;}
	
	
	
	
	return 0;
}
