#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double j,Xa,Xb,Ya,Yb;
	cin>>Xa>>Ya>>Xb>>Yb;
	j=sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb));
    printf("%0.3f\n",j);
    
    return 0;
}
