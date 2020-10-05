#include<iostream>
using namespace std;

int main()
{
	const double PI=3.1415926 ;
	double r,sd,h,sc;
	cout<<"°ë¾¶";
	cin>>r;
	cout<<"¸ß";
	cin >>h;
	
	sd=PI*r*r;
	sc=r*2*PI*h;
	
	cout<<2*sd+sc; 

	return 0;
}
