#include<iostream>
using namespace std;
int main()
{
	float a,b,c,x1,x2,discriminate,realpart,imaginarypart;
	cout<<"Enter cofficienta,b,c:";
	cin>>a>>b>>c;
	discriminate=b*b-4*a*c;
	if(disceiminate>0)
	{
		x1=(-b+sqrt(discriminate))/(2*a);
		x2=(-b-sqrt(discriminate))/(2*a);
		cout<<"Roots are realand different."<<endl;
		cout<<"x1="<<x1<<endl;
		cout="x2="<<x2<,endl;
	}
	elseif(discriminant==0){
		cout<<"roots are real and same."<<endl;
		x1=-b/(2*a);
		cout<<"x1=x2="<<x1<<endl;
	}
	else{
		realpart=-b/(2*a);
		imaginarypart=squt(-discriminate)/(2*a);
		cout<<"rootsare complex and different.";
		cout<<"x1="<<realpart<<"+"<<imaginarypart<<"i";
		cout<<"x2="<<realpart<<"-"<<imaginarypart<<"i";
		
	}
	return 0;
}
