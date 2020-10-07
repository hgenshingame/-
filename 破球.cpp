#include <iostream>
using namespace std;

int main()
{
	double c,h,m;
	cin>>h,c;
	m=h;
	do
	{   ++c; 
		h=h/2;
		m=m+h*2;
	}while(c<=9); 
	cout<<m<<" "<<h;
	return 0; 
	
}
