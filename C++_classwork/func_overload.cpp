#include<iostream>
using namespace std;
class MethodOverloadingDemo
{
	public:
	int add()	
	{
		return 10;
	}
	int add(int a)
	{
		return a;
	}
	float add(float a, float b)
	{
		return a+b;
	}
	int add(int a, int b,int c)
	{
			return a+b+c;
	}
};


int main()
{
	MethodOverloadingDemo md;
	cout<<"\n"<<md.add();
	cout<<"\n"<<md.add(4);
	cout<<"\n"<<md.add(2,3);
	cout<<"\n"<<md.add(1,2,3);
	return 0;
	
}