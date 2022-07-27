#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void getsA()
		{
			cout<<"Enter A :";
			cin>>a;
		}
};
class B:public A
{
	public:
		void showA()
		{
			cout<<"A = "<<a;
		}
};
int main()

{
	B b;
	b.getsA();
	b.showA();
	return 0;
}