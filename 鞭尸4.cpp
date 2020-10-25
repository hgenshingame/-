#include<iostream>
using namespace std;
int main()
{   
	float a=1,b=0,c=0;
	for(int i=1;i<=20;++i){
		a=a+b;
		c=c+b/a;
		b=a;
	}
	cout<<c;
	return 0;
}

