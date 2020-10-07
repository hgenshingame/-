#include<iostream>
using namespace std;

int main()
{
	int m2w=1,t=0;
 	while (t<1992)
 	{
	 	++t;
	 	m2w=(m2w*92)%100;
	 }
	cout<<m2w;
	return 0;
}
