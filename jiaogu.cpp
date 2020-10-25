#include<iostream> 
using namespace std;

int main(){
	int a;
	cin>>a;
	do{
	if (a%2==0) {a=a/2;cout<<a<<endl;}
	else {a=a*3+1; cout<<a<<endl;}
    }while(a!=1);
	cout<<"end";
	
	return 0;
}
