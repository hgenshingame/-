#include<iostream>
using namespace  std;

int main(){
	double b,w,s;
	cin>>s;
	
	b = s/3.0+50;
	w = s/1.2;
	if (b==w) cout<<"ALL";
    if (w>b)
	 { 
	 cout<<"BICK";
	 return 0;
	   }
	if (w<b) 
	 { cout<<"WALK" ;
	 return 0;}
}

