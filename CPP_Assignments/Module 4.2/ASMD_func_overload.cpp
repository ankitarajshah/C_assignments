#include<iostream>
using namespace std;
class ASMD
{
	public:
	void display(int a,int b,int c,int d,int e)
	{
		cout<<"Addition ="<<a+b+c+d+e<<endl;	
	}	
	void display(double p,double q,double r)
	{
		cout<<"Subtraction ="<<p-q-r<<endl;
	}
	void display(long double m,long double n,long double o,long double p )
	{
		cout<<"Multiplication ="<<m*n*o*p<<endl;
	}
	void display(float s,float t)
	{
		cout<<"Division ="<<s/(float)t<<endl;
	}
};
int main()
{
	ASMD a;
	a.display(10,30,2,1,1);
	a.display(10,2,1);
	a.display(10,20,2,2);
	a.display(50,5);
	
}