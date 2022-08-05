#include<iostream>
using namespace std;
class demo
{
	public:
	int area(double r)
	{
		return (3.14*r*r);	
	}
	int area(int l,int b)
	{
		return (l*b)/2;	
	}
	int area(float x,float y,float z)
	{
		return (x*y*z);	
	}
	
		
};
int main()
{
	demo d;
	cout<<d.area(10);
	cout<<endl<<d.area(5,8);
	cout<<endl<<d.area(15,13,1);
//	demo *d = new demo;
//	cout<<"area 1 : "<<d->area(10);
//	cout<<endl;
//	cout<<"area 2 : "<<d->area(5,8);
//	cout<<endl;
//	cout<<"area 3 : "<<d->area(15,13);
	return 0;
}