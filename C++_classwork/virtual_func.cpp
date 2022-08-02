#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()
		{
			cout<<"Show Method from Base Class.";
		}
	
};
class Derived:public Base
{
	public:
		void show()
		{
			cout<<"Show Method from Derived Class.";
		}
	
};
int main()
{	
//	Base *bac = new Base;
//	bac->show(); 
//	Derived *ba = new Derived;
//	ba->show();
	
	Base *bas = new Derived;
	bas->show();
	return 0;
}