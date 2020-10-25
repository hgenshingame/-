#include<iostream>
using namespace std;

int main(){
	int a,x;
	for(int m=0;m<=33;++m)
		for(int g=0;g<=50;++g){ 
				x=90-m-g; 
				if (15*m+10*g+5*x==500)
				 	cout<<"mj="<<m<<"gj="<<g<<"xj="<<x<<endl;
			}
	return 0;
}
