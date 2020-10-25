#include<iostream>
using namespace std;

int main(){
	int a=0;
	for (int i=0;i<=1002;i+=2){
		a=a+i;
		i+=10;
	}
	cout<<a;
	return 0;
}
