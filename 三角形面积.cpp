#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	double x1,x2,x3,y1,y2,y3,a,b,c,s,p;
	cout<<"first";
	cin>>x1>>y1;
	cout<<"second";
	cin>>x2>>y2;
	cout<<"third";
	cin>>x3>>y3;
	
	a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("%0.2f\n",s);
	return 0;
}
