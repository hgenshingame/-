#include<cstdio>
#include<iostream>
using namespace std;

int main()
{   char c1,c2;
    c1='a';
    c2='A';
    cout<<c1<<"   "<<c2<<endl;
    c1=c1-32; //Ð¡Ð´×ÖÄ¸×ª»»´óÐ´×ÖÄ¸
    c2=c2+32; //´óÐ´×ÖÄ¸×ª»»Ð¡Ð´×ÖÄ¸
    cout<<c1<<"   "<<c2<<endl; 
    return 0;
}

