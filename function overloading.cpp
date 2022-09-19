#include<iostream>
#include<conio.h>
using namespace std;
int area(int);
int area(int x,int y);
int area(float);
int main()
{
	int s,l,b;
	int r;
	cout<<"enter side of square";
	cin>>s;
	cout<<"enter l and b of rect";
	cin>>l>>b;
	cout<<"enter radius of circle";
	cin>>r;
	cout<<"area of square="<<area(s);
	cout<<"area of rect="<<area(l*b);
	cout<<"area of circle="<<area(3.14,r);
}

int area(int s)
{
return(s*s);
}
int area(int l,int b)
{
return( l*b);
}
int area(float r)
{
return (3.14*r*r);
}
