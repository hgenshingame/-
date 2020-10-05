#include<iostream>
using namespace std;

int main()
{   
    int a,b,c;
    int x,y,z; 
    char n1,n2,n3;
	cout<<"输入名字缩写  ";
	cin>>n1>>n2>>n3;
	a=n1;b=n2;c=n3;
	cout<<"第一次加密"<<a<<b<<c<<endl;
    y=b*2-32;
	x=a*2-32;
	z=c*2-32;
	cout<<"第二次加密"<<x<<y<<z;
	
	return 0;
}
