#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,m;
	double x,y;
	
	scanf("%d %d %d",&n,&x,&y);
    
	m = n-ceil(y/x);
    printf("%0.0d",m);
}
