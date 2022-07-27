#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void getsA()
		{
			cout<<"Enter A =";
			cin>>a;
		}
		void showA()
		{
			cout<<"A ="<<a;
		}
};
class B: public A
{
	public:
		int b;
		void getsB()
		{
			cout<<"Enter B =";
			cin>>b;
		}
		void showB()
		{
			cout<<"B ="<<b;
		}
};
class C:public B
{
	public:
		int c;
		void getsC()
		{
			cout<<"Enter C =";
			cin>>c;
		}
		void showC()
		{
			cout<<"C ="<<c;
		}
};

int main()
{
	C c;
	c.getsA();
	c.getsB();
	c.getsC();
	c.showA();
	c.showB();
	c.showC();
	return 0;
	
}