#include<iostream>
using namespace std;
int main()
{
	void area(int);
	void area(int,int);
	void area(float);
	int s,l,b;
	float r;
	cout<<"Enterthe side of square";
	cin>>s;
	area(s);
	cout<<"Enter the length and breadth of rectangle.";
	cin>>l>>b;
	area(l,b);
	cout<<"Enter the radius of circle.";
	cin>>r;
	area(r);
return 0;
}
	void area(int s)
	{
		int a ;
		a=s*s;
		cout<<"Area of square="<<a;
		}
			
		void area(int l,int b);
		{
		
			int a;
			a=l*b;
			cout<<"area of rectangle="<<a;
	}
		void area(float r)
		{
			float a;
			a=3.14*r*r
			cout<<"area of circle="<<a;
		}
	}
}

