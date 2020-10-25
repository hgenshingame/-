#include <iostream> 
using namespace std;
int main(){
	int f1=1,f2=1,f3;
	cout<<"1"<<endl<<"1"<<endl;
	for(int i=3;i<=40;i++){
		f3=f1+f2;
		if(i%10==0) cout<<f3<<endl;
		else cout<<f3<<" "<<endl;
		f1=f2;f2=f3;
	}
	return 0;
}
