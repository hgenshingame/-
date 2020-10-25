#include<iostream>
using namespace std;

int main(){
	int a;
	for(int m=0;m<=33;++m)
		for(int g=0;g<=50;++g)
			for(int x=0;x<=90;++x){
				if (m+g+x==90 && 15*m+10*g+5*x==500)
				 	cout<<"mj="<<m<<"gj="<<g<<"xj="<<x<<endl;
			}
	return 0;
} 
