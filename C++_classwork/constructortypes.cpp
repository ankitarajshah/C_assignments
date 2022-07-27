#include<iostream>
using namespace std;
class ConstructorDemo
{
	public:
		double a,b;
	ConstructorDemo()
	{
		cout<<"Default constructor.";
		a=27;
		b=16;
	}
	ConstructorDemo(double a,double b)
	{
		cout<<"\nParametrized constructor.";
		this->a =a;
		this->b =b;
		//cout<<"\nA= "<<this->a<<"B ="<<this->b;
	}
	ConstructorDemo(const ConstructorDemo &s)
	{
		cout<<"\nCopy constructor.";
		this->a=s.a;
		this->b=s.b;
	}
	void display()
	{
		cout<<"\nA = "<<a<<"\nB= "<<b<<endl;
	}
};
int main()
{
	ConstructorDemo cd;
	cd.display();
	ConstructorDemo cd1(40,20);
	cd1.display();
	ConstructorDemo cd2(cd);
	cd2.display();
	
	return 0;
}
	