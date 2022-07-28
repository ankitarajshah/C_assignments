#include<iostream>
using namespace std;
class Demo
{
	public:
	void mul()	
	{
		cout<<"square ="<<2*2;
	}
};

class Demo1: public Demo
{
	public:
	void mul()
	{
		cout<<"Square = "<<3*3;
		cout<<"\n only object output."; //same func name with same parameter and return type //run time only this o/p will give
	}
};
int main()
{
//	Demo1 d;
//	d.mul();
	Demo1 *d = new Demo1;
	d->mul();
	return 0;
	
}