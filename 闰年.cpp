#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int year;
	cin>>year;
	year = fabs(year);
	if (year%400==0 
	&& year%4 ==0 
	||year%100)
      {
	  cout<<"闰年";
      }
	else{
	  cout<<"不是闰年"; 
	} 
	return 0;
 } 
