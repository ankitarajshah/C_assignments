#include<iostream>
using namespace std;

class A
{
	public:
		void show1()// not a pure virtual function
		{
			cout<<"\nNon-Virtual Show Method from A";
		}
		virtual void show2(); // Pure virtual function or abstract function ------declaration
};
class B:public A
{
	public:
		void show2()
		{
			cout<<"\nImplemented Show method from Class A";
		}
		virtual void show3();
};
class C:public B
{
	public:
		void show3()
		{
			cout<<"\nImplemented Show method from Class B";
		}
	
};
int main()
{
	C c;
	c.show1();
	c.show2();
	c.show3();
	return 0;
}