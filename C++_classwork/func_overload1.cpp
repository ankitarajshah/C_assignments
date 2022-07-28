#include<iostream>
using namespace std;
class Demo
{
	public:
	void mul()	
	{
		cout<<"square ="<<2*2;
	}
	int mul(int a)
	{
		return a*a;
	}
};


int main()
{
	Demo d;
	d.mul();
	cout<<"\nsquare ="<<d.mul(3);
	return 0;
	
}