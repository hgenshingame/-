#include<iostream>
using namespace std;
//2567 -- 6725
int main()
{
	int n,ge,shi,bai,qia;
    
    cout<<"输入一个千位数  "; 
	cin>>n;
	qia = n/1000;
	bai = n/100%10;
	shi = n/10%10;
	ge = n%10;
	
	cout<<shi*1000+ge*100+qia*10+bai;

	return 0;
}
