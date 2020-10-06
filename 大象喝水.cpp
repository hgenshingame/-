#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415926;
int main()
{
	double t;
	int h,r;
	cin>>h>>r;
	t=20000/(PI*r*r*h);
	t=ceil(t);
	cout<<t;
	
	return 0;
}
