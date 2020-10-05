#include<iostream>
using namespace std;

int main()
{
	int n,ge,shi,bai;

	cin>>n;
	bai = n/100;
	shi = n/10%10;
	ge = n%10;
	
	cout<<ge*100+shi*10+bai;

	return 0;
}
